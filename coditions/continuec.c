#include <stdio.h>
int main()
// continue statement breaks one iteration (in the loop),
// if a specified condition occurs, and continues with the next iteration in the loop.
{

    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d\n", i);
    }
    printf("choice is  1");
}