# ADR 0002: Versioned persistence is required for future storage

- **Status:** Accepted as a target requirement
- **Date:** 2026-11-16

## Context
The current implementation writes raw `Account` structures with `fwrite`. Structure padding, type representation, compiler ABI, architecture, and source changes can alter the saved bytes.

## Decision
A future storage redesign must define an explicit portable versioned format and validate every record. The existing raw binary format is treated as a legacy educational format.

## Consequences
Existing data files must not be assumed compatible across structure or compiler changes. Migration should only be attempted for synthetic data after a tested parser is implemented.
