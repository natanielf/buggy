// Common causes of segfaults in C
// https://en.wikipedia.org/wiki/Segmentation_fault#Examples

#include <stdio.h>

void stack_overflow() {
    // Infinite recursion
    stack_overflow();
}

void buffer_overflow() {
    // Out of bounds access
    char s[] = "panther";
    char c = s[10];
}

void null_ptr_dereference() {
    // Invalid memory address
    int* i = NULL;
    *i = 10;
}

void read_only_memory() {
    // This string literal is stored in the read-only data segment
    // https://en.wikipedia.org/wiki/Data_segment#rodata
    char* s = "chapman";
    s[0] = 'C';
}

int main(void) {
    printf("Common causes of segmentation faults:\n");

    printf("1. Stack overflow (infinite recursion)\n");
    stack_overflow();

    printf("2. Buffer overflow\n");
    buffer_overflow();

    printf("3. Null pointer dereference\n");
    null_ptr_dereference();

    printf("4. Writing to read-only memory\n");
    read_only_memory();

    return 0;
}
