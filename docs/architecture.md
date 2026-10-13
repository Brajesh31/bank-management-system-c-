# Architecture

The program is a single C translation unit, `bank management system/main.c`.

`main` loads records, displays a menu, dispatches to account operations, and saves records on exit. A fixed global array of 100 `Account` structures is the in-memory store. The operation functions mutate that array directly. `saveAccounts` and `loadAccounts` read and write the raw structure representation to `accounts.dat`.

There is no network service, database, authentication layer, or concurrency model.
