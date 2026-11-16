# 📦 Packaging and deployment

## Deployment model

There is no server deployment model. The project is a local command-line executable. It does not listen on a port, expose network endpoints, or require a database service.

## Build a distributable educational binary

1. Start from a clean checkout.
2. Compile the source with a supported compiler.
3. Review compiler warnings.
4. Run the manual test matrix using fictional data.
5. Include the README and the MIT license with the executable.
6. Explain the platform and compiler used to produce the binary.
7. Do not package `accounts.dat` or user-entered sample records.

## Checked-in executable

The repository currently contains `bank management system/main.exe`. It is a prebuilt binary and may not match the current source or the recipient's machine. Building from `main.c` is preferred for reproducibility.

## Local data

The process working directory controls where `accounts.dat` is created. A distributable bundle should clearly tell users where that file will be written and should avoid shared or publicly synchronized directories.

## Production warning

Do not deploy this program as a real banking service. Reaching production readiness would require a full redesign, threat modelling, secure identity and authorization, transactional data storage, audit and recovery controls, independent security review, and legal/regulatory assessment.
