# ▶️ Runbook: local development

## Purpose
Build and run the terminal program in a controlled directory with synthetic test values.

## Procedure
1. Clone or open a clean repository checkout.
2. Install GCC or Clang.
3. Change into `bank management system`.
4. Compile with `-std=c11 -Wall -Wextra -Wpedantic`.
5. Create a private temporary folder for the run.
6. Launch the executable with the temporary folder as its working directory.
7. Use only fictional names and balances.
8. Exercise the create, view, deposit, withdrawal, and delete options.
9. Choose Exit and confirm the save message.
10. Restart from the same working directory and view the loaded records.
11. Remove the temporary test folder when finished.

## Verification
Confirm the compiler succeeds, the menu appears, each selected operation returns to the menu, and the process exits after option 6. Confirm the expected local file is created.

## Rollback
Discard the temporary directory and rebuild from a clean checkout. Do not try to recover meaningful personal or financial information from this demonstration.
