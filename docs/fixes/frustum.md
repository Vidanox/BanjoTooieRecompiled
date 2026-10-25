# Match Expand visibility to the wider camera instead of forcing objects visible

In Expand, first-person zoom near Witchyworld's entrance can crash after resource allocation failure; leaving first person and walking can also trigger a crash. The existing wrapper override turns every rejected object visible, defeating selective culling.

Replace the three verdict overrides with one hook after the camera planes are rebuilt. Widen and normalize only the two horizontal planes using the window aspect ratio, retaining zoomed field of view and existing box/sphere consumers. Window dimensions are published from the SDL event thread through an atomic. Original, Manual, 4:3 and portrait views retain their prior planes. The game heap budget is unchanged.

Validation:
- ROM-free checks execute production hooks and generated float-AABB, s16-AABB and sphere consumers: 20,676 checks pass across zoom levels, camera rotations, translated origins, ultrawide dimensions, independent point classification, invalid inputs and Original/Manual preservation.
- Windows build passed. Human gameplay no longer reproduced the reported zoom/walking crashes; subsequent combined-build play appeared stable.
- Linux, unusual display configurations and exhaustive level coverage remain untested. Separate framebuffer and composite-pickup edge defects are addressed by separate changes.

Run the ROM-free regression check after initializing dependencies:

```sh
python tools/tests/frustum/check.py
```

Use a compiler developer shell on Windows. `--cxx` selects clang-cl/clang++,
and `--deps` can select another checkout with the same pinned dependencies.
The check does not start the game and needs no ROM, save or captured RAM.
