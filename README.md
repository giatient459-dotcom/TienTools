# TienTools

A small starter mod for **Geometry Dash Android** using the Geode SDK.

## What it does

- Adds a button to the main menu's bottom menu.
- Shows a confirmation popup when the button is pressed.
- Builds an Android 64-bit `.geode` package through GitHub Actions.

## Build with GitHub Actions

1. Open the **Actions** tab in this repository.
2. Select **Build TienTools (Android64)**.
3. Press **Run workflow**, or push a commit to `main`.
4. Download the `TienTools-Android64` artifact from the completed workflow run.

The workflow uses the official [Geode build action](https://github.com/geode-sdk/build-geode-mod).

## Compatibility note

The initial metadata targets Geometry Dash Android **2.2081**, matching the current Geode example template baseline used when this starter was prepared. Confirm your installed Geometry Dash and Geode versions before installing the package. This repository has not yet been built or tested in-game; the first Actions run is the build verification.

## Project files

- `src/main.cpp` — mod code.
- `mod.json` — Geode metadata and Android game version.
- `CMakeLists.txt` — native build configuration.
- `.github/workflows/android.yml` — Android64 build and artifact upload.
