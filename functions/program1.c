#include <stdio.h>

// Create a function
void myFunction()
{
    printf("function call");
}
int number_function()
{
    // printf("hi");
    return 5;
}

int main()
{
    // myFunction();
    int a = number_function();
    printf("%d", a);
    return 0;
}