# 🧪 Testing and quality strategy

## Current status

The original application does not include a dedicated unit-test suite. A compiler build can validate syntax and linking, but it does not prove the correctness of interactive operations, persistence, or security. The CI workflow in this repository is compiler verification only.

## Warning-enabled build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -O2 main.c -o bank-management-system
```

For compiler-supported sanitizers:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -g -fsanitize=address,undefined main.c -o bank-management-system-test
```

Only run tests with synthetic values and disposable files.

## Manual test matrix

| ID | Scenario | Procedure | Expected current observation |
|---|---|---|---|
| TC-01 | Empty state | Start without `accounts.dat`, select View | Empty-state message |
| TC-02 | Create | Create a synthetic record | Success message |
| TC-03 | List | View after creating | Record is printed |
| TC-04 | Deposit | Deposit a positive amount | Balance increases |
| TC-05 | Withdrawal within balance | Withdraw less than balance | Balance decreases |
| TC-06 | Insufficient funds | Withdraw more than balance | Insufficient-funds message |
| TC-07 | Missing account | Use unknown number | Account-not-found message |
| TC-08 | Delete | Delete a known number, then view | First matching record is gone |
| TC-09 | Capacity | Try to add record 101 | Capacity warning |
| TC-10 | Save/reload | Exit normally, restart from same folder | Saved entries are read |
| TC-11 | Missing file | Start in a new directory | Starts without loaded entries |
| TC-12 | Unwritable directory | Run where save file cannot be created | Save-open error is printed |

## Defect-revealing tests

These cases expose weaknesses and should not be assumed safe or successful: non-numeric input at numeric prompts, a name longer than 49 characters, empty names, negative initial balance, negative deposit/withdrawal, duplicate identifiers, EOF at a prompt, forced termination before Exit, truncated data files, arbitrary binary files, and simulated short writes.

## Acceptance criteria for a safer revision

- All input is read with explicit bounds and checked conversion.
- Invalid input does not mutate application state.
- Identifiers are unique and ranges are documented.
- Currency is represented in integer minor units.
- Every read/write/flush/close outcome is checked.
- Corrupt and incompatible file formats are detected safely.
- Domain and storage functions have independent automated tests.
- A complete menu workflow has an integration test.

A green CI build means the compiler command passed. It is not a full quality or security certification.
