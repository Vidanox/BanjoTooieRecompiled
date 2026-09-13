@echo off
rem Re-run the CMake configure step. Needed whenever the set of generated
rem RecompiledFuncs/*.c files changes: CMakeLists.txt uses file(GLOB), so new
rem files are invisible to the existing build directory and link with
rem "undefined symbol: static_N_..." errors.
rem   MSYS_NO_PATHCONV=1 cmd /c cmake_configure.bat
setlocal
call "%~dp0msvc_env_use.bat"
cmake -S . -B build-cmake -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl
endlocal
