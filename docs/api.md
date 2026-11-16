# 🧾 Console interface and function reference

This repository does not provide HTTP endpoints, a network API, or a separately compiled library. Its user-facing interface is a terminal menu. The following reference describes the functions in `bank management system/main.c`.

## Menu mapping

| Choice | Function | Responsibility |
|---|---|---|
| 1 | `createAccount()` | Append a record if capacity remains |
| 2 | `viewAccounts()` | Print active account records |
| 3 | `depositMoney()` | Add a supplied amount to the first matching record |
| 4 | `withdrawMoney()` | Compare balance and subtract an amount |
| 5 | `deleteAccount()` | Remove the first matching record |
| 6 | `saveAccounts()` | Write active records before exit |

## Data structure

```c
typedef struct {
    int accountNumber;
    char name[50];
    float balance;
} Account;

Account accounts[100];
int accountCount = 0;
```

## Function contracts as currently implemented

- `main`: calls the loader once, controls the menu loop, and saves on Exit.
- `createAccount`: checks the fixed array capacity, reads fields, appends the structure, increments the count.
- `viewAccounts`: handles the empty state and prints the active prefix.
- `depositMoney`: scans for the first matching number and adds an entered amount.
- `withdrawMoney`: scans for the first match and subtracts when the balance comparison passes.
- `deleteAccount`: shifts subsequent entries left and decrements the count.
- `saveAccounts`: opens the relative binary file for writing and calls `fwrite`.
- `loadAccounts`: reads up to 100 structures from the relative binary file.

## Complexity

For `n = accountCount` (maximum 100): view, search, deposit, and withdrawal are O(n); deletion is O(n) because of its shift; save and load are O(n); append is O(1) after the capacity check. No performance tuning is warranted before correctness and safety fixes.
