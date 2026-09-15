@echo off
rem Sourcing helper for the build scripts: puts the MSVC x64 environment in
rem scope, preferring the cached copy over re-running vcvars64.bat.
rem
rem   vcvars64.bat      ~1600 ms
rem   cached env        ~30 ms
rem
rem Uses goto labels rather than parenthesised if-blocks on purpose: cmd expands
rem %VCToolsInstallDir% inside a block when it *parses* the block, i.e. before
rem the `call` in that block has run, so the staleness guard would always see an
rem empty value and fall through to the slow path.
rem
rem Deliberately has no setlocal: the variables must land in the caller's
rem environment, and callers that care already scope themselves.
set "_MSVC_CACHE=%~dp0build\msvc_env.bat"

if not exist "%_MSVC_CACHE%" goto :regenerate
call "%_MSVC_CACHE%" >nul 2>&1
if exist "%VCToolsInstallDir%include\vector" goto :done

:regenerate
rem Locate vcvars64.bat. Its path is NOT fixed: the standalone Build Tools land
rem under Program Files (x86), but the Community/Professional/Enterprise editions
rem land under the 64-bit Program Files, and the drive and version can differ.
rem Hardcoding one of those works only on the machine it was written on -- which
rem is exactly why the build failed on a CI runner. vswhere ships with every
rem VS 2017+ installer and knows all of them; the historical path is kept as a
rem last resort.
set "_VCVARS="
set "_VSROOT="
set "_VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%_VSWHERE%" set "_VSWHERE=%ProgramFiles%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%_VSWHERE%" goto :fallback
for /f "usebackq delims=" %%i in (`"%_VSWHERE%" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "_VSROOT=%%i"
if not defined _VSROOT goto :fallback
if not exist "%_VSROOT%\VC\Auxiliary\Build\vcvars64.bat" goto :fallback
set "_VCVARS=%_VSROOT%\VC\Auxiliary\Build\vcvars64.bat"
goto :found

:fallback
if not exist "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" goto :novcvars
set "_VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"

:found
call "%_VCVARS%" >nul 2>&1
python "%~dp0tools\gen_msvc_env.py" >nul 2>&1
if not exist "%VCToolsInstallDir%include\vector" goto :novcvars
goto :done

:novcvars
echo [msvc_env_use] Could not locate a usable vcvars64.bat. 1>&2
echo [msvc_env_use] Install Visual Studio 2022 (any edition) with the "Desktop development with C++" workload. 1>&2
exit /b 1

:done
exit /b 0
