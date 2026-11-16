# 🏦 Project overview

## Purpose

The Bank Management System is a small procedural C application designed to practise core language concepts through a familiar account-record scenario. The user works through a numbered terminal menu, and the program manages a limited collection of records in memory.

The educational value comes from its use of a structure, fixed-size array, functions, loops, conditionals, console input/output, and standard file operations. The project is deliberately small enough for a beginner to read in one sitting.

## Goals currently represented in code

- Create a record with an integer account number, text name, and initial balance.
- Print every record in the active array range.
- Deposit and withdraw values against the first matching account number.
- Delete a record by compacting the array after its removal.
- Load and save records using a local binary file.

## Explicit non-goals

The current project is not an online or production banking service. It has no login, identity verification, access roles, transaction ledger, inter-account transfer, external API, remote database, encryption, fraud detection, or regulatory controls.

## Intended audience

The project is aimed at C learners, students, and reviewers who want to see a compact example of procedural decomposition and elementary file handling. It can support classroom discussion about why input validation, exact money representation, and durable storage matter.

## Runtime summary

The program starts in `main`, attempts to load `accounts.dat`, and enters a `do...while` menu loop. Each menu choice dispatches to one function. Operations 1 through 5 return to the menu. Option 6 invokes the save function before the process exits.

The fixed array can hold at most 100 active records. The persistence file is relative to the process working directory.

## Vocabulary

| Term | Meaning |
|---|---|
| Account | One instance of the `Account` structure |
| Account number | Integer searched to select a record |
| Active array range | Elements from index zero to `accountCount - 1` |
| Deposit | Add a supplied amount to a balance |
| Withdrawal | Subtract an amount after the current balance comparison |
| Binary persistence | Storing structure bytes in `accounts.dat` |
| Working directory | Directory used to resolve the relative data-file name |

## Success criteria for this learning project

A local demonstration should compile using a C11-capable compiler, show the menu, permit each implemented operation with synthetic values, and reload data after a normal save and restart. Passing these basic criteria does not establish security, reliability, or financial correctness.
