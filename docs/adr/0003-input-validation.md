# ADR 0003: Validate input before mutating account state

- **Status:** Accepted as a target requirement
- **Date:** 2026-11-16

## Context
The current program ignores most `scanf` return values and uses an unbounded scanset for the fixed 50-byte account name.

## Decision
The safe implementation direction is bounded line input, checked numeric conversion, and validation before any account state is changed.

## Consequences
Error paths need explicit handling and tests. Until the source is updated and verified, the documentation continues to describe the current unsafe input implementation honestly.
