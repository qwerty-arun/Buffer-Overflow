# Buffer Overflow
- Is a vulnerability when moer data is written than its capacity.
- Overflowed data corrupts other important data.

## What is the Solution?
- Runtime Bounds Checking.
- In this method, we always check how much space left in an array.
- Pros: Impossible for a buffer overflow. Ex: Python, Java
- Cons: Performance cost due to extra code.
- C and C++ are the only languages where Buffer Overflow is allowed.

## Dangers
- That important data is the return address of the parent function.
- The overflowed data overwrites it.

## User Controlled Buffer Overflow
- Ex: Buffer Overflow in an ATM just by entering a name. The return address gets modified to an address of function which we want to execute like dispenseMoney().

## What if there isn't a pre-existing function?
- Array stores a code that you wrote.
- Return address points to this array.
- This function gets called repeatedly.
- Ex: reading a file, dumping passwords, starting a shell.

## Command to run the program
```bash
gcc -o buffer_overflow buffer_overflow.c -fno-stack-protector
```
- But, it does nothing to prevent heap corruption.