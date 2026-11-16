# ♿ Terminal accessibility and usability

The program uses textual prompts and numbered menu options through `printf`, with input read through `scanf`. Text-based interaction avoids colour-only status cues, but that alone does not guarantee a usable or accessible terminal experience.

## Current characteristics

- Menu options are numbered.
- Prompts and results are text-based.
- Account records are printed as single lines.
- There is no help mode, confirmation dialogue, configurable output, or explicit screen-reader testing.
- Invalid input recovery is not robust.

## Improvement recommendations

1. Use precise prompts that explain expected type and valid range.
2. Keep success and error messages understandable without relying on colour or symbols.
3. Add a help option with descriptions of each operation.
4. Ask for confirmation before deleting a record.
5. Keep line lengths readable in narrow terminals.
6. Avoid displaying sensitive record fields in shared environments.
7. Recover from invalid input without forcing a restart.
8. Test with common screen readers and terminal settings before making accessibility claims.

## Example prompt direction

A future validated prompt could say: `Withdrawal amount (positive value not exceeding available balance):`. The existing code does not yet implement this validation.
