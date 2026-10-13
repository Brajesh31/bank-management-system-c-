# Security Policy

## Scope and limitations

This command-line program is a learning example, not a financial service. It stores account names and balances in an unencrypted binary file, has no authentication or authorization, accepts unchecked numeric input, uses floating-point balances, and does not provide audit or backup controls. The current code can also accept negative values and duplicate account numbers.

Do not use real identities, account numbers, or balances. Before any serious use, add robust parsing and validation, fixed-precision monetary representation, authenticated access, encryption, atomic persistence, backups, auditing, and recovery testing.

## Reporting

Do not publish sensitive files or exploit details in an issue. Contact Brajesh Kumar privately through <https://github.com/brajesh31> with sanitized reproduction steps and impact.
