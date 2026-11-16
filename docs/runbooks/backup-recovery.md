# 💾 Runbook: disposable test-data backup and recovery

## Important limitation
The program does not implement automatic backups or a restore command. Its file stores raw C structure bytes and is intended only for synthetic test records.

## Manual backup
1. Exit normally and observe the save result.
2. Locate `accounts.dat` in the process working directory.
3. Copy it to a private test-only backup folder.
4. Label the copy with the source revision, compiler, and architecture.
5. Never include real names or financial values.

## Manual restore
1. Stop the application.
2. Preserve a copy of the current test file.
3. Restore only a backup known to contain synthetic data.
4. Use a compatible build environment.
5. Start the executable from the directory containing the restored file.
6. Inspect the loaded test records.

## Recovery limits
A truncated, malformed, or incompatible file may be unrecoverable. The current format has no integrity check or schema version.
