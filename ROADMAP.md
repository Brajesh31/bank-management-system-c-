# Roadmap

## Correctness

- Add checked input parsing and clear recovery from invalid input.
- Reject duplicate account numbers and non-positive transaction amounts.
- Replace floating-point balances with fixed-precision integer cents.

## Persistence

- Define a versioned, portable file format.
- Add atomic writes, backups, corruption detection, and recovery.

## Quality

- Add a Makefile or CMake project and automated tests.
- Add sanitizers and compiler warnings to local verification.
- Separate the user interface, domain logic, and storage layers.
