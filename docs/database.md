# Data storage

The program does not use a database. It stores up to 100 `Account` structures in memory and writes them as raw binary records to `accounts.dat`.

Each record currently contains:

- `accountNumber`: `int`
- `name`: fixed 50-character array
- `balance`: `float`

This format is compiler- and platform-dependent, unencrypted, unversioned, and not safe for interoperability. Treat the file as disposable test data.
