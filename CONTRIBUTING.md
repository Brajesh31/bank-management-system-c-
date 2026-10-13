# Contributing

Contributions should preserve the program's educational scope and must use synthetic account data only.

## Workflow

1. Create a focused branch.
2. Build with a C11 compiler and warnings enabled.
3. Test create, list, deposit, withdrawal, insufficient funds, delete, restart/load, malformed input, and file-error paths.
4. Do not commit `accounts.dat`, new executables, or private data.
5. Document changes to the binary format or command menu.

Report security issues privately using [SECURITY.md](SECURITY.md). Pull requests should include build and manual-test commands.
