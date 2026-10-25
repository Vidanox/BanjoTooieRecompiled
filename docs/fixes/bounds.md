# Preserve framebuffer write bounds for expanded Tooie world triangles

Expand can partially cut objects off even when the game submitted their triangles. RT64 computes write bounds using posScreen before the wider projection is applied, so side-region geometry can contribute no bounds and a later framebuffer pass can allocate too little height.

Extend the port's existing RT64 patch to conservatively track the viewport/scissor intersection for submitted Expand perspective world triangles (transform group 0x1000). Support explicit ADJUST and AUTO using the full-width, landscape and origin checks used by ProjectionProcessor. Original, sky, orthographic and nonadjusted groups retain their existing paths. This changes framebuffer tracking; it does not bypass guest object culling. No temporary tracing is added.

Validation:
- Live investigation observed 108/228 and 204/228 framebuffer heights at visible cutoffs; actual world tags were AUTO.
- ROM-free checks extract the production gate from the patch, actual FixedRect methods and real header constants. Missing side-region geometry, Original, AUTO/ADJUST/STRETCH, sky, orthographic, custom origin and narrow viewport cases pass.
- Human testing of the combined Windows fixes reported more consistent Expand rendering.
- The conservative bounds may increase render-target work for affected passes. Broad GPU/backend and Linux testing remain outstanding. The clean combined submission build is checked separately from the earlier instrumented gameplay build.

Run the ROM-free regression check after initializing dependencies:

```sh
python tools/tests/bounds/check.py
```

Use a compiler developer shell on Windows. `--cxx` selects clang-cl/clang++,
and `--deps` can select another checkout with the same pinned dependencies.
The check does not start the game and needs no ROM, save or captured RAM.
