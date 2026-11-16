# 🚨 Runbook: local demonstration failure

## Scope
This procedure covers a crashed or corrupted local learning demo. It is not an incident response framework for a financial institution.

## Immediate containment
1. Stop using the affected executable.
2. Do not overwrite a data file that may be relevant to diagnosis.
3. Make a separate copy of the synthetic test file, if needed.
4. Record operating system, compiler version, compile command, and exact steps before failure.
5. Reproduce only with disposable test data.

## Malformed input
The program has weak input recovery. Restart in a clean terminal with synthetic data. Record the exact input that caused the issue and report it through a bug issue, without attaching sensitive material.

## Suspected file corruption
Keep an untouched copy for debugging. The current raw binary format has no version or checksum, so automatic repair cannot be assumed. Recreate synthetic records if necessary.

## Security issue
For memory-safety or other security findings, use private disclosure as described in [SECURITY.md](../../SECURITY.md).
