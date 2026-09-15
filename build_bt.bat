@echo off
rem Rebuild the port. Invoked from the project root:
rem   MSYS_NO_PATHCONV=1 cmd /c build_bt.bat [ninja-target...]
rem Exists because nested quoting through bash mangles `cmd /c "..." && ...`.
rem
rem The MSVC environment comes from msvc_env_use.bat (~30 ms cached) rather than
rem vcvars64.bat directly (~1600 ms); ninja itself only takes ~80 ms, so calling
rem vcvars here made the wrapper almost entirely toolchain-setup overhead.
setlocal
call "%~dp0msvc_env_use.bat"
if errorlevel 1 exit /b 1
if "%~1"=="" (
  ninja -C build-cmake BanjoTooieRecompiled
) else (
  ninja -C build-cmake %*
)
if errorlevel 1 exit /b 1
endlocal
exit /b 0
