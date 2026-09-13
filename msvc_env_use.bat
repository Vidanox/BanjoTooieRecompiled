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
rem Missing or stale: derive the environment the slow way, then refresh the
rem cache so the next invocation takes the fast path.
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1
python "%~dp0tools\gen_msvc_env.py" >nul 2>&1

:done
exit /b 0
