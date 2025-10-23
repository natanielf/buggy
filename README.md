# Some Buggy Code

Some buggy code created for the purposes of learning to debug programs with `lldb`.

- `array.cpp`: print an array of numbers
- `list.cpp`, `LinkedList.hpp`: a (partly) functional singly-linked list
- `segfaults.c`: examples of a few common causes of segmentation faults

## Build Instructions

Build each example with debugging symbols enabled (`-g`).

Array:

```sh
clang++ array.cpp -o array -g
```

Linked List:

```sh
clang++ list.cpp -o list -g
```

Segfaults:

```sh
clang segfaults.c -o segfaults -g
```

## Debugging Instructions

Use `lldb` to find and fix the bugs in the example programs.

```sh
$ lldb ./[PROGRAM]

(lldb) [COMMAND]
```

### LLDB Command Reference

| **Name**                                     | **Description**                                   |
| -------------------------------------------- | ------------------------------------------------- |
| `run`                                        | Starts running the loaded program                 |
| `print [EXPRESSION]`                         | Prints the value of an expression                 |
| `list`                                       | Displays the currently executing section of code  |
| `breakpoint set --name [FUNCTION]`           | Sets a breakpoint at the specified function       |
| `breakpoint set --file [FILE] --line [LINE]` | Sets a breakpoint at the specified line number    |
| `next`                                       | Advances to the next line of the current function |
| `step`                                       | Steps into a function call                        |
| `thread backtrace`                           | Displays the program call stack                   |
