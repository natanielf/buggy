// Common causes of segfaults in C
// https://en.wikipedia.org/wiki/Segmentation_fault#Examples

#include <stdio.h>

void stack_overflow() {
    stack_overflow();
}

void buffer_overflow() {
    char s[] = "panther";
    char c = s[10];
}

void null_ptr_dereference() {
    int *i = NULL;
    *i = 10;
}

void read_only_memory() {
    char *s = "chapman";
    *s = 'C';
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
