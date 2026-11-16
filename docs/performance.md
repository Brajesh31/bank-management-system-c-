# ⚡ Performance notes

The fixed collection holds at most 100 records. The current linear searches and array shifts are simple and proportionate to that small limit. Performance is not the main weakness; correctness, input safety, and data integrity are much more important.

Let `n` be the active record count, with `0 <= n <= 100`.

| Operation | Time complexity | Reason |
|---|---|---|
| Append | O(1) | Writes into the next free slot |
| View | O(n) | Prints each active record |
| Deposit lookup | O(n) | Scans for the first matching number |
| Withdrawal lookup | O(n) | Scans for the first matching number |
| Delete | O(n) | Search plus shifting the remaining suffix |
| Save | O(n) | Writes the active range |
| Load | O(n) | Reads at most 100 records |

## Practical bottlenecks

A fixed limit is a product constraint, not an algorithmic scaling strategy. For 100 records, a hash table or database would add complexity without solving the serious safety defects. Validate values, define the data format, and add tests first.

## Future scaling

Only if the educational scope grows should the project consider a dynamically sized collection or an external storage service. Measure a realistic workload after correctness and integrity are established.
