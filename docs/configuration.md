# ⚙️ Configuration

The current C program has no runtime configuration subsystem. It does not load environment variables, JSON, INI, or command-line options.

## Working directory

The filename `accounts.dat` is relative. The operating system resolves it against the process working directory. This determines where the program looks for existing records and where it creates the save file.

Recommended local practice:
1. Create a dedicated temporary folder.
2. Run the executable with that folder as its working directory.
3. Use fictional test records only.
4. Keep the folder private and remove it after the session.

## Compiler configuration

A suggested development build is:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -g -O0 main.c -o bank-management-system
```

A demonstration build can use `-O2` after warnings have been reviewed.

## Environment example

`.env.example` is informational only. The application does not load it, and `DATA_FILE` is not currently read by the source. Editing that file will not change the actual path used by `fopen`.

## Possible future configuration

A future version could accept a validated file path as an argument. Any such feature should document path resolution, permissions, error handling, and safe defaults. Documentation must only describe configuration after the source implements it.
