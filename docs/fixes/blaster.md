# Fix Breegull Blaster room-entry crashes by correcting relocation carry

Entering Targitzan's Temple or Ordnance Storage can abort in a Breegull Blaster state transition because an overlay-local switch was emitted as a runtime function lookup.

The relocation target's lower half is signed by lw/addiu. Add 0x8000 before masking the upper half so an address such as 0x8080A494 reconstructs correctly. Update only the 20 affected committed generated function bodies: five bsfirstp tables and 17 chdiggerboss tables, 22 tables total. Function boundaries, symbols, stubs and unrelated bodies are preserved. Full regeneration has unrelated core1 failures, so it is deliberately avoided here.

Refs #5 and #9. The workaround in #9 manually rewrites generated switches; this change repairs their detection in the recompiler patch. In our Windows tests, both rooms worked normally with no unexpected health loss or frozen gameplay. We have not reproduced the other reporter's Linux setup, so we cannot yet confirm their separate follow-up symptom is resolved there.

Validation:
- Original investigation compared all 22 generated tables with ROM entries and preserved a positive-low-half control.
- The ROM-free regression check tests signed-low address reconstruction and executes the actual bsfirstp_entrypoint_26 with mocked helpers for states 0x73, 0x46 and 0x99. Dispatch and stack/register restoration pass; mocks do not verify complete gameplay.
- Windows game build passed; a human entered both affected rooms without visible problems.
- Linux and the affected boss gameplay have not been tested.

Run the ROM-free regression check after initializing dependencies:

```sh
python tools/tests/blaster/check.py
```

Use a compiler developer shell on Windows. `--cxx` selects clang-cl/clang++,
and `--deps` can select another checkout with the same pinned dependencies.
The check does not start the game and needs no ROM, save or captured RAM.
