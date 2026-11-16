# 🧰 Installation and build

## Requirements

- GCC or Clang with C11 support.
- A terminal or command prompt.
- Git for cloning the repository.
- Permission to write to the runtime working directory.

No third-party libraries or package installation are required.

## Clone the repository

```bash
git clone https://github.com/Brajesh31/bank-management-system-c-.git
cd bank-management-system-c-
```

## Enter the source directory

```bash
cd "bank management system"
```

## Compile with GCC

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -O2 main.c -o bank-management-system
```

## Compile with Clang

```bash
clang -std=c11 -Wall -Wextra -Wpedantic -O2 main.c -o bank-management-system
```

## Run the executable

Linux/macOS:

```bash
./bank-management-system
```

Windows PowerShell:

```powershell
.\bank-management-system.exe
```

## Optional debug build

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -g -O0 main.c -o bank-management-system-debug
```

## Runtime file location

The program opens `accounts.dat` as a relative path. The file is created in the process working directory, which may differ from the executable's directory. Choose a dedicated temporary directory for demonstrations and use fictional data only.
