# Development

Keep C source under `bank management system/` and use warning-enabled C11 builds. The current program uses fixed-size buffers and raw binary persistence, so changes to `Account` can make existing data unreadable.

Manually verify every menu option after changes. Add tests around parsing, account lookup, amount validation, deletion, persistence, and corrupted files before refactoring storage.

Generated executables and `accounts.dat` are local artifacts and should remain untracked.
