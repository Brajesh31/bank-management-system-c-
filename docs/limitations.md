# ⚠️ Known limitations register

The following risks are visible in the current implementation. A row should only be marked resolved after source changes and relevant tests have been reviewed.

| ID | Limitation | Consequence | Priority |
|---|---|---|---|
| L-01 | Fixed array of 100 records | Hard capacity ceiling | Medium |
| L-02 | Global mutable state | Tight coupling, difficult isolated tests | Medium |
| L-03 | Duplicate account numbers | Ambiguous first-match behaviour | High |
| L-04 | Unchecked `scanf` | Malformed input can corrupt control flow | Critical |
| L-05 | Unbounded name scanset | Potential buffer overflow | Critical |
| L-06 | Negative amounts accepted | Can reverse transaction semantics | Critical |
| L-07 | Floating-point money | Rounding error | High |
| L-08 | Raw binary struct storage | ABI and compiler dependency | High |
| L-09 | No format version or checksum | Corrupt/incompatible data not detected | High |
| L-10 | Save only on Exit | Unsaved session changes can be lost | High |
| L-11 | Unchecked write/close outcomes | Partial persistence may be misreported | High |
| L-12 | No authentication or authorization | All local users have full access | Critical |
| L-13 | No audit history | Balance changes cannot be reconstructed | High |
| L-14 | No unit-test suite | Regressions may go undetected | High |

## Release boundary

The application must remain labelled as an educational prototype until critical input and memory-safety defects are fixed. Fixing those alone would still not make it a secure financial service.
