# 🧭 Roadmap

This roadmap puts correctness and safety ahead of adding more menu options.

## 🔴 P0: input safety and domain validation
- [ ] Replace unchecked `scanf` with bounded line input and checked conversions.
- [ ] Bound and validate account-holder names.
- [ ] Reject malformed and out-of-range identifiers.
- [ ] Reject negative, non-finite, and invalid amounts.
- [ ] Enforce unique account numbers and array invariants.
- [ ] Check every file I/O result.

## 🟠 P1: money and persistence correctness
- [ ] Store monetary values as integer minor units.
- [ ] Define a portable, versioned storage format.
- [ ] Validate records before accepting loaded state.
- [ ] Implement atomic saves and backup/restore.
- [ ] Add transaction history and audit events.

## 🟡 P2: maintainability and testing
- [ ] Split model, input, domain, persistence, and UI responsibilities.
- [ ] Add unit tests for account rules.
- [ ] Add persistence integration tests.
- [ ] Add static analysis and sanitizer builds.
- [ ] Document format migration and compatibility.

## 🟢 P3: educational usability
- [ ] Add search and sort.
- [ ] Add deletion confirmation.
- [ ] Add an in-program help menu.
- [ ] Add redacted report output.

Real online banking, payment processing, customer identity verification, and regulatory compliance are not small extensions to this program. They require a separate design and qualified review.
