# Troubleshooting

## The compiler is not found

Install GCC or Clang and ensure the compiler directory is on `PATH`.

## Accounts do not persist

Run the executable from the expected working directory and confirm the process can create `accounts.dat`. The current code saves on menu option 6, not on every mutation.

## Existing data will not load

The binary format depends on the `Account` structure and compiler layout. Delete only disposable test data and recreate it if the format has changed.

## The menu behaves unexpectedly

The current implementation uses unchecked `scanf` calls. Enter numeric values at numeric prompts and restart after malformed input.
