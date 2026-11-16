# 🤝 Contributing

Thank you for considering a contribution. Keep changes focused, verifiable, and suitable for an educational C project.

## Before opening an issue

Search existing issues and confirm the behaviour against `bank management system/main.c`. Use only synthetic names, account numbers, and balances in examples.

## Development workflow

1. Create a focused branch.
2. Reproduce the issue or state the learning objective.
3. Make the smallest coherent change.
4. Compile with C11 and strict warnings.
5. Run relevant functional and boundary tests.
6. Review buffer sizes, conversion results, array bounds, and file I/O.
7. Update affected docs and Mermaid diagrams.
8. Open a pull request with exact verification commands and observed results.

## Build command

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -g -O0 main.c -o bank-management-system
```

## Contribution rules

- Do not add real personal or financial data.
- Do not commit `accounts.dat`, secrets, object files, or generated binaries unintentionally.
- Do not claim a feature exists before it is implemented.
- Document compatibility impact when changing the `Account` structure or file format.
- Include tests for malformed, negative, boundary, and missing-record cases when relevant.

## Pull requests

Use the repository template. Explain what changed, why, what commands were run, and what remains incomplete. Keep code, tests, docs, and diagrams consistent.
