{ pkgs, lib, ... }:

{
  # Compatibility overlay for devenv with nixos-24.11
  overlays = [
    (final: prev: {
      buildEnv = args: prev.buildEnv (builtins.removeAttrs args [ "ignoreSingleFileOutputs" ]);
    })
  ];

  # Build tools and dependencies
  packages = with pkgs; [
    # Compiler toolchain & build system
    clang
    cmake
    ninja
    pkg-config

    # Libraries
    SDL2
    freetype
    gtk3
    vulkan-headers
    vulkan-loader
    libGL
    zlib

    # Tools
    patchelf
    python3
    git
  ];

  # Set compiler and runtime library paths
  env = {
    CC = "clang";
    CXX = "clang++";
    LD_LIBRARY_PATH = lib.makeLibraryPath (with pkgs; [
      vulkan-loader
      libGL
      SDL2
      freetype
      gtk3
    ]);
  };

  # Helper commands for building and running
  scripts = {
    setup-deps.exec = ''
      python3 tools/setup_deps.py "$@"
    '';

    cmake-configure.exec = ''
      cmake -S . -B build-cmake -G Ninja -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ "$@"
    '';

    build-bt.exec = ''
      cmake --build build-cmake --target BanjoTooieRecompiled "$@"
    '';

    run-bt.exec = ''
      if [ ! -f "build-cmake/BanjoTooieRecompiled" ]; then
        echo "Binary not found. Building..."
        build-bt
      fi
      exec ./build-cmake/BanjoTooieRecompiled "$@"
    '';
  };

  enterShell = ''
    # Ensure bundled dxc-linux binary is patched for NixOS dynamic linker if needed
    DXC_BIN="lib/rt64/src/contrib/dxc/bin/x64/dxc-linux"
    DXC_LIB="lib/rt64/src/contrib/dxc/lib/x64"
    if [ -f "$DXC_BIN" ]; then
      if ! "$DXC_BIN" --help >/dev/null 2>&1; then
        INTERP=$(patchelf --print-interpreter "$(which clang)" 2>/dev/null || true)
        if [ -n "$INTERP" ]; then
          echo "Patching bundled dxc-linux for NixOS..."
          patchelf --set-interpreter "$INTERP" "$DXC_BIN"
          patchelf --set-rpath "\$ORIGIN/../../lib/x64:${pkgs.zlib}/lib:${pkgs.stdenv.cc.cc.lib}/lib:${pkgs.glibc}/lib" "$DXC_BIN"
          patchelf --set-rpath "\$ORIGIN:${pkgs.zlib}/lib:${pkgs.stdenv.cc.cc.lib}/lib:${pkgs.glibc}/lib" "$DXC_LIB/libdxcompiler.so"
          patchelf --set-rpath "\$ORIGIN:${pkgs.zlib}/lib:${pkgs.stdenv.cc.cc.lib}/lib:${pkgs.glibc}/lib" "$DXC_LIB/libdxil.so"
        fi
      fi
    fi

    # Verify dependency patches
    if [ -f "tools/setup_deps.py" ]; then
      python3 tools/setup_deps.py --check || echo "Run 'setup-deps' to initialize and patch submodules."
    fi

    echo ""
    echo "Banjo-Tooie: Recompiled dev environment ready."
    echo "  setup-deps       - fetch and patch git submodules"
    echo "  cmake-configure  - configure CMake with Clang and Ninja"
    echo "  build-bt         - compile BanjoTooieRecompiled"
    echo "  run-bt           - launch BanjoTooieRecompiled"
    echo ""
  '';
}
