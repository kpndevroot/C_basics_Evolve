#include <stdio.h>
// A pointer is a variable that stores the memory address of
// another variable as its value
// A pointer variable points to a data type (like int )
int main()
{
    int a = 10;

    printf("%d\n", a);
    printf("%p\n", &a);
    return 0;
}