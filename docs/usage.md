# 🧑‍💻 User guide

## Before using the program

Use synthetic test values only. This application does not protect personal or financial information. Build from source using [installation instructions](installation.md), then run it from the working directory in which you want the local data file to live.

## Menu operations

### 1. Create Account
Choose `1`. Enter an integer account number, a name, and an initial balance. The record is placed in memory. The current implementation does not reject duplicate numbers or negative starting balances.

### 2. View Accounts
Choose `2`. The program prints every active account. If the active count is zero, it prints that no accounts are available.

### 3. Deposit Money
Choose `3`, enter an account number, then enter the amount. The first matching record is updated. The current code does not require the amount to be positive.

### 4. Withdraw Money
Choose `4`, enter an account number, then enter the amount. If the current balance compares greater than or equal to the amount, the program subtracts it. Otherwise it reports insufficient funds. Negative values are not safely handled.

### 5. Delete Account
Choose `5` and enter the account number. The first matching record is removed by shifting later entries. The application does not ask for confirmation and has no undo.

### 6. Exit
Choose `6`. The program attempts to save the active account array to `accounts.dat`, prints its exit message, and terminates. Confirm the save message appears. The current code does not detect all partial-write failures.

## Suggested learning exercise

1. Create two clearly fictional records.
2. Display the records.
3. Deposit a small positive amount into one.
4. Withdraw an amount smaller than its balance.
5. Try a withdrawal above the balance.
6. Delete one record.
7. Exit normally.
8. Restart from the same working directory and view the loaded records.

This is a classroom demonstration, not a financial system acceptance test.
