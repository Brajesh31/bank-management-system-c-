# 🛠️ Troubleshooting

## Compiler is not recognized
Install GCC or Clang and add the compiler's binary directory to `PATH`. Restart the terminal after changing the environment.

## Directory name contains spaces
Quote the application directory:

```bash
cd "bank management system"
```

## The data file is not created
`accounts.dat` is relative to the process working directory. Confirm that the process has write permission in that directory and that you selected Exit.

## Records are missing after restart
Check the working directory used during the earlier save. The program may be reading a different `accounts.dat`. It saves only on option 6.

## Existing data no longer loads correctly
Raw structure bytes are not versioned or portable. Use disposable synthetic data and recreate the file after incompatible structure or compiler changes.

## Input appears stuck after a typo
The current implementation ignores `scanf` conversion results. Invalid text can remain in the input stream. Restart with test data; the proper fix is a bounded line parser with checked conversion.

## Long account names cause problems
The current name scanset does not specify a width for the 50-byte array. Avoid long inputs until the input handling has been corrected.

## Compiler warnings appear
Read and resolve them. Do not suppress warnings to force a green build. The known risks are documented in [security.md](security.md).
