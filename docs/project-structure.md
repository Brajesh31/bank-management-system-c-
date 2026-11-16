# 🗂️ Project structure

The repository contains the C program, its existing Windows executable, project governance files, GitHub contribution templates, CI workflows, and detailed documentation.

```text
.
├── .github/
│   ├── ISSUE_TEMPLATE/
│   │   ├── bug_report.yml
│   │   ├── documentation.yml
│   │   └── feature_request.yml
│   ├── workflows/
│   │   ├── c-build.yml
│   │   ├── docs-check.yml
│   │   └── update-readme.yml
│   └── PULL_REQUEST_TEMPLATE.md
├── bank management system/
│   ├── .vscode/settings.json
│   ├── main.c
│   └── main.exe
├── docs/
│   ├── adr/
│   ├── diagrams/
│   ├── runbooks/
│   └── project guides
├── .editorconfig
├── .env.example
├── .gitattributes
├── .gitignore
├── CHANGELOG.md
├── CITATION.cff
├── CODE_OF_CONDUCT.md
├── CODEOWNERS
├── CONTRIBUTING.md
├── GOVERNANCE.md
├── LICENSE
├── MAINTAINERS.md
├── README.md
├── ROADMAP.md
├── SECURITY.md
└── SUPPORT.md
```

## Root-level files

| File | Responsibility |
|---|---|
| `.editorconfig` | Shared editor defaults |
| `.env.example` | Informational note, the program does not read environment configuration |
| `.gitattributes` | Git text and line-ending handling |
| `.gitignore` | Excludes runtime data and local build artifacts |
| `README.md` | Project landing page and quick start |
| `LICENSE` | MIT license text already present in the repository |
| `CHANGELOG.md` | Human-readable repository change history |
| `CITATION.cff` | Software citation metadata |
| `CONTRIBUTING.md` | Contribution and verification workflow |
| `SECURITY.md` | Security scope, known risks, and disclosure |
| `ROADMAP.md` | Prioritized future improvements |
| `SUPPORT.md` | Support channels and boundaries |

## Application directory

`main.c` is the canonical editable source. `main.exe` is an existing prebuilt Windows executable and may not match the source revision or run on other platforms. `.vscode/settings.json` is editor configuration only.

## Documentation directory

The `docs` folder contains architecture, feature, workflow, interface, data, test, security, deployment, accessibility, performance, troubleshooting, and development guides. Mermaid source files are kept separately so they can be reviewed and edited. ADRs capture rationale; runbooks describe local synthetic-data procedures.

## Generated files and local state

`accounts.dat` is created at runtime and should not be committed. Object files and new executable builds are generated artifacts. Any test fixture must contain synthetic values and be reviewed before inclusion.
