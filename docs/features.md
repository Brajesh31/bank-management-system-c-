# ✨ Implemented feature catalogue

This page describes the behaviour visible in the current `main.c`, including known gaps. It does not claim that roadmap items already exist.

## 🆕 Create account: `createAccount`

The function refuses to append when `accountCount` is already 100. Otherwise it reads an integer account number, a line for the name, and a floating-point starting balance. It copies the local structure into the next array slot and increments the count.

**Gaps:** no uniqueness check, no validation of the initial balance, no checked numeric conversions, and no explicit width on the name scanset. The last issue can overflow the 50-byte name buffer.

## 📋 View accounts: `viewAccounts`

When the active count is zero, it prints an empty-state message. Otherwise it prints every active record with the account number, name, and balance formatted to two decimal places.

**Gaps:** there is no privacy filtering, identity check, or authorization. Anyone running the program can see every record.

## 💰 Deposit: `depositMoney`

The function reads an account number, scans from index zero to the active count, prompts for an amount after finding the first matching record, adds that amount to the stored balance, prints the updated balance, and returns.

**Gaps:** negative, non-finite, or excessively large values are not rejected. No separate transaction event or receipt is recorded. Duplicate identifiers make first-match behaviour ambiguous.

## 💸 Withdrawal: `withdrawMoney`

The function searches for the first matching account. It reads an amount and subtracts it when `balance >= amount`; otherwise it prints an insufficient-funds message.

**Gaps:** a negative amount can pass the comparison and increase the balance when subtracted. `float` is unsuitable for exact monetary accounting, and input parsing is unchecked.

## 🗑️ Delete: `deleteAccount`

The function looks for the first matching account number, shifts subsequent entries one position left, decrements the active count, and reports success.

**Gaps:** there is no confirmation, soft-delete status, audit event, or undo.

## 💾 Save: `saveAccounts`

The function opens `accounts.dat` with `wb`, writes the active `Account` structures, closes the stream, and prints success when opening the file worked.

**Gaps:** write and close results are not verified. Opening with `wb` truncates the previous file before the new write is known to have completed. There is no atomic replacement or backup.

## 📂 Load: `loadAccounts`

The loader opens `accounts.dat` with `rb`. If opening fails, it returns. Otherwise it reads at most 100 structures and assigns the number of records read to `accountCount`.

**Gaps:** partial records, corrupt values, unexpected file sizes, and format versions are not checked.
