#include <stdio.h>
int main()
// The break statement can also be used to jump out of a loop.
{

    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}