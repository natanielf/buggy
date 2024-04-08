# Some Buggy Code

Some buggy code created for the purposes of learning to debug programs with `gdb`.

- `array.cpp`: print an array of numbers
- `list.cpp`, `LinkedList.hpp`: a (partly) functional singly-linked list
- `segfaults.c`: examples of a few common causes of segmentation faults

## Build Instructions

Build each example with debugging symbols enabled (`-g`).

Array:

```sh
g++ array.cpp -o array -g
```

Linked List:

```sh
g++ list.cpp -o list -g
```

Segfaults:

```sh
gcc segfaults.c -o segfaults -g
```

## Debugging Instructions

Use `gdb` to find and fix the bugs in the example programs.

```sh
$ gdb ./[PROGRAM]

(gdb) [COMMAND]
```

### GDB Command Reference

| **Name**             | **Description**                                   |
| -------------------- | ------------------------------------------------- |
| `run`                | Starts running the loaded program                 |
| `print [EXPRESSION]` | Prints the value of an expression                 |
| `list`               | Displays the currently executing section of code  |
| `break [LOCATION]`   | Sets a breakpoint at the specified location       |
| `next`               | Advances to the next line of the current function |
| `step`               | Steps into a function call                        |
| `backtrace`          | Displays the program call stack                   |
