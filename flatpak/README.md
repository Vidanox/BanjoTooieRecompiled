# Flatpak Packaging for Banjo-Tooie: Recompiled

This directory contains the Flatpak packaging files for **Banjo-Tooie: Recompiled** (`io.github.Vidanox.BanjoTooieRecompiled`).

## Prerequisites

Ensure you have `flatpak` and `flatpak-builder` installed on your system.

Add the Flathub repository if not already present:
```sh
flatpak remote-add --user --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo
```

Install the required Freedesktop 24.08 runtime, SDK, and the LLVM 18 extension:
```sh
flatpak install --user -y flathub \
  org.freedesktop.Platform//24.08 \
  org.freedesktop.Sdk//24.08 \
  org.freedesktop.Sdk.Extension.llvm18//24.08
```

Ensure submodules are cloned and dependency patches are applied:
```sh
python tools/setup_deps.py
```

## Building the Flatpak

From the root of the repository:

```sh
flatpak-builder --user --force-clean --repo=repo --install builddir flatpak/io.github.Vidanox.BanjoTooieRecompiled.json
```

## Creating a Standalone Bundle (.flatpak)

To produce a single-file `.flatpak` bundle suitable for distribution or transferring to a Steam Deck:

```sh
flatpak build-bundle repo BanjoTooieRecompiled.flatpak io.github.Vidanox.BanjoTooieRecompiled --runtime-repo=https://flathub.org/repo/flathub.flatpakrepo
```

## Installing and Running

### Run directly (if installed with `--install`):
```sh
flatpak run io.github.Vidanox.BanjoTooieRecompiled
```

### Install from a `.flatpak` bundle:
```sh
flatpak install BanjoTooieRecompiled.flatpak
```

## Configuration and Save Data

Within the Flatpak sandbox, save data and configurations are stored in:
```
~/.var/app/io.github.Vidanox.BanjoTooieRecompiled/config/BanjoTooieRecompiled/
```
