# 📚 Documentation hub

This folder documents the existing C console program and a clearly labelled set of proposed improvements. The source of truth for current behaviour is [`bank management system/main.c`](../bank%20management%20system/main.c). Documentation must not turn planned capabilities into claims about the current application.

> **Safety boundary:** this repository is an educational prototype. It must not be used with real account-holder identities, account numbers, or balances.

## 🧭 Reading paths

**New users:** [Overview](project-overview.md) → [Installation](installation.md) → [Usage](usage.md) → [FAQ](faq.md).

**Developers:** [Architecture](architecture.md) → [Project structure](project-structure.md) → [Features](features.md) → [Interface reference](api.md) → [Development](development.md) → [Testing](testing.md).

**Reviewers:** [Security](security.md) → [Data model](database.md) → [Limitations](limitations.md) → [Runbooks](runbooks/README.md) → [ADRs](adr/README.md).

## 📖 Complete catalogue

| Topic | Document |
|---|---|
| Product goals and boundaries | [Project overview](project-overview.md) |
| Runtime structure | [Architecture](architecture.md) |
| Current and target design | [System design](system-design.md) |
| Repository map | [Project structure](project-structure.md) |
| Startup and menu lifecycle | [Workflow](workflow.md) |
| Implemented operations | [Features](features.md) |
| Compiler setup | [Installation](installation.md) |
| Runtime/build configuration | [Configuration](configuration.md) |
| User instructions | [Usage](usage.md) |
| Menu and function reference | [API/interface](api.md) |
| Account data and file format | [Database/storage](database.md) |
| Input and persistence movement | [Data flow](data-flow.md) |
| Function responsibilities | [Modules](modules.md) |
| Logical component boundaries | [Components](components.md) |
| Verification strategy | [Testing](testing.md) |
| Safe packaging | [Deployment](deployment.md) |
| Security assessment | [Security](security.md) |
| Terminal accessibility | [Accessibility](accessibility.md) |
| Complexity and constraints | [Performance](performance.md) |
| Known gaps | [Limitations](limitations.md) |
| Proposed evolution | [Future scope](future-scope.md) |
| Terminology | [Glossary](glossary.md) |
| External language/tool references | [References](references.md) |
| Common questions | [FAQ](faq.md) |
| Common failures | [Troubleshooting](troubleshooting.md) |
| Contributor workflow | [Development](development.md) |
| Editable Mermaid source | [Diagrams](diagrams/README.md) |
| Recorded design rationale | [ADRs](adr/README.md) |
| Local procedures | [Runbooks](runbooks/README.md) |

## ✅ Existing implementation facts

- `Account` contains `int accountNumber`, `char name[50]`, and `float balance`.
- The global store is `accounts[100]`, with `accountCount` as its active size.
- `main` loads records at startup and saves on menu option 6.
- The application is a single C source file with no HTTP API or database server.
- The binary file stores raw structures and has no explicit version header.

If source code changes, update every affected guide and diagram in the same change.
