# Use complete composite pickup visibility bounds only in Expand

Composite pickups can disappear as a whole near screen edges when their contents should remain visible. Their callback draws a radius-70 bowl first and skips the larger contents when that prerequisite sphere is culled.

Scope an Expand-only radius override around the shared bowl draw for the 13 audited chnests descriptors. Use the larger of the actor's cached radius and the verified complete model radius (107, 160, 101 or 177 units), covering first draws with an unpopulated cache. Apply the radius before the original scale multiplication, consume it once and clear the scope on return. Unrelated descriptors and Original/Manual are unchanged. Models, guest memory, collection distances and collision sizes are unchanged.

Validation:
- ROM-free checks execute the production hooks and generated sphere consumer: 8,937 checks pass across all descriptors, synthetic edge positions, cache/scale variations, independent plane comparison, guest-memory equality, scope cleanup, one-shot consumption and unrelated descriptors. Separate private-capture checks passed during investigation; no captures are included.
- The model metadata audit established the 13 descriptors and complete radii. The larger note-family variant's exact friendly identity is unconfirmed.
- Windows build passed. Human testing found the feather correction effective and the combined build stable with more consistent Expand rendering.
- Not every pickup variant was individually located and verified in gameplay. Linux and exhaustive area coverage remain untested.

Run the ROM-free regression check after initializing dependencies:

```sh
python tools/tests/pickups/check.py
```

Use a compiler developer shell on Windows. `--cxx` selects clang-cl/clang++,
and `--deps` can select another checkout with the same pinned dependencies.
The check does not start the game and needs no ROM, save or captured RAM.
