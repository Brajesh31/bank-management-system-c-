# Installation

Install a C compiler such as GCC or Clang. On Windows, use MinGW-w64, LLVM, or a compatible development environment.

From `bank management system`, compile:

```powershell
gcc -std=c11 -Wall -Wextra -pedantic main.c -o bank-management-system.exe
.\bank-management-system.exe
```

The executable creates `accounts.dat` only after choosing Exit. Keep that file private and back it up only when it contains synthetic data.
