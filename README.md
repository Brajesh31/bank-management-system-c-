# Bank Management System in C

This repository contains a small terminal-based bank management demonstration written in C. It keeps up to 100 in-memory `Account` records and persists them to a binary `accounts.dat` file when the user exits.

> **Educational prototype:** This is not a secure banking system. It has no authentication, encryption, audit trail, input validation layer, concurrency control, or recovery strategy. Do not use real personal or financial information.

## Features

- Create accounts with an account number, name, and initial balance.
- List all loaded accounts.
- Deposit and withdraw money.
- Prevent withdrawals larger than the current balance.
- Delete accounts.
- Save and load records from `accounts.dat`.

## Build and run

From the repository root, compile the source:

```powershell
Set-Location '.\bank management system'
gcc -std=c11 -Wall -Wextra -pedantic main.c -o bank-management-system.exe
.\bank-management-system.exe
```

Run the same commands with `clang` if preferred. The checked-in `main.exe` is a prebuilt artifact; rebuilding locally is recommended.

The data file is resolved relative to the process working directory. Run the executable from `bank management system` if you want `accounts.dat` next to the source.

## Data and limitations

`Account` contains an integer account number, a fixed 50-byte name buffer, and a `float` balance. The binary file is local and compiler/layout dependent. Duplicate account numbers are not rejected, malformed input is not handled robustly, and negative amounts are not blocked by the current implementation.

See [SECURITY.md](SECURITY.md) before sharing or deploying the program.

## License

MIT licensed. See [LICENSE](LICENSE).

Last updated: 2026-10-26 09:46 UTC
