# Bitwise-operators

**Aim**
To perform bitwise set and reset

## Theory
### Experiment 4(a)
Bitwise operations work directly on the binary representations of integers, allowing efficient data manipulation. Key operations include:

1. **Bitwise AND (&)**: Sets bits to 1 where both operands have 1.
2. **Bitwise OR (|)**: Sets bits to 1 if at least one operand has 1.
3. **Bitwise XOR (^)**: Sets bits to 1 where operands differ.
4. **Bitwise NOT (~)**: Inverts all bits.
5. **Left Shift (<<)**: Shifts bits to the left, effectively multiplying by 2.
6. **Right Shift (>>)**
: Shifts bits to the right, effectively dividing by 2.

### Experiment 4(b)
- **Setting a Bit**: Alters a bit to 1 at a specific position.
- **Resetting a Bit**: Alters a bit to 0 at a specific position.

## Algorithm

### For Experiment 4(a)
1. **Start**
2. **Declare** variables `a` and `b`.
3. **Input** values for `a` and `b`.
4. **Perform Bitwise Operations**:
   - AND: `a & b`
   - OR: `a | b`
   - NOT: `~a`
   - XOR: `a ^ b`
   - Left Shift: `a << 1`
   - Right Shift: `a >> 2`
5. **Output** results for each operation.
6. **End**

### For Experiment 4(b)
1. **Start**
2. **Declare** variables `a`, `i`, `set`, and `reset`.
3. **Input** `a` and shift position `i`.
4. **Compute**:
   - Set Bit: `set = a | (1 << i)`
   - Reset Bit: `reset = a & (~(1 << i))`
5. **Output** `set` and `reset` results.
6. **End**
