# 🚀 Future scope

The correct order is to make current behaviour safe and testable before adding a large feature list.

## Phase 1: input and domain correctness

- Replace unchecked formatted input with bounded line parsing.
- Reject malformed identifiers and amounts.
- Enforce maximum name length and unique account numbers.
- Reject negative, non-finite, and out-of-range values.
- Check every array bound and conversion result.

## Phase 2: monetary representation

- Store balances as integer minor currency units.
- Define display and rounding rules.
- Detect overflow and invalid ranges.
- Add boundary tests for repeated arithmetic.

## Phase 3: robust persistence

- Define a portable, versioned file format.
- Validate file header, record count, field lengths, and ranges.
- Check read, write, flush, and close outcomes.
- Use atomic replacement and maintain backups.
- Test truncated and incompatible files.

## Phase 4: maintainability and tests

- Separate UI, parser, domain logic, and storage modules.
- Pass state explicitly instead of sharing globals.
- Add unit and integration tests.
- Add sanitizer and static-analysis jobs.

## Phase 5: educational features

- Search and filter records.
- Add a transaction history for learning purposes.
- Confirm destructive actions.
- Add a help menu and redacted report export.

## Not a minor extension

Online multi-user banking, payment processing, customer identity verification, and regulatory compliance require a separate system architecture and qualified security/legal review. They are not responsible additions to this small console program.
