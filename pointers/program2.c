#include <stdio.h>

int main()
{
    int a = 10;    // An int variable
    int *ptr = &a; // A pointer variable, with the name ptr, that stores the address of a

    // Output the value of a (43)
    printf("%d\n", a);

    // Output the memory address of a

    // Output the memory address of a with the pointer
    printf("ptr is %p\n", ptr);
    printf("*ptr is %d", *ptr);

    return 0;
}