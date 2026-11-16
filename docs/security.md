# 🔐 Security assessment

## Executive assessment

**The current program is not suitable for real banking or personal data.** It is a local educational console program. It provides no authentication, authorization, encryption, audit trail, reliable parsing, or recovery strategy. This is a source-grounded review of visible implementation characteristics, not a formal external penetration test.

## Findings

| ID | Area | Current behaviour | Risk |
|---|---|---|---|
| SEC-01 | Name parsing | Unbounded scanset writes into `char name[50]` | Buffer overflow |
| SEC-02 | Input conversion | `scanf` results are generally ignored | Invalid/uninitialized values and stuck input |
| SEC-03 | Amount validation | Negative amounts are accepted | Deposit/withdraw semantics can be reversed |
| SEC-04 | Identity | No authentication | Anyone with local access can use all operations |
| SEC-05 | Authorization | No role or ownership checks | No access separation |
| SEC-06 | Currency | `float` balance | Rounding and representation error |
| SEC-07 | Identifier integrity | Duplicate account numbers allowed | Ambiguous first-match updates/deletes |
| SEC-08 | Storage confidentiality | Raw unencrypted bytes | Local data exposure |
| SEC-09 | Storage portability | Compiler-dependent structure layout | Cross-build incompatibility |
| SEC-10 | Save verification | `fwrite` and `fclose` results not checked | Partial save can appear successful |
| SEC-11 | Atomicity | File opened with `wb` | Previous file truncated before replacement is verified |
| SEC-12 | Auditability | No transaction history | Mutations cannot be reconstructed |
| SEC-13 | Recovery | No version, checksum, or backup mechanism | Corruption may be unrecoverable |

## Immediate safe-use rules

1. Enter only fictional names and balances.
2. Do not share the executable with real account records.
3. Keep `accounts.dat` out of version control.
4. Use a private temporary working directory.
5. Do not market the project as secure banking software.

## Remediation priorities

### P0: input and memory safety

Replace unchecked `scanf` with bounded line input and checked conversion. Validate name length, numeric ranges, and array indices before changing state. Reject negative and non-finite values.

### P1: financial correctness

Represent currency as integer minor units. Enforce unique account numbers. Centralize domain validation and record a transaction event for every accepted balance change.

### P1: persistence integrity

Define an explicit versioned format. Validate every header and field. Check all I/O return values. Save to a temporary file and replace the prior snapshot only after successful completion. Add backup and recovery tests.

### P2: actual security controls

Any real service would require authenticated identity, authorization, protected credentials, encryption in transit and at rest, tamper-evident audit records, monitoring, recovery controls, and qualified review.

## Disclosure

Report suspected security issues privately using the owner contact route in [SECURITY.md](../SECURITY.md). Do not upload real account files or disclose exploitable details in a public issue.
