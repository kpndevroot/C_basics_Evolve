#include <stdio.h>
int main()
{
    int array[5];
    int i = 0;
    // array insertion
    for (i = 0; i < 5; i++)
    {
        printf("enter the %d the element : \n", i);
        scanf("%d", &array[i]);
    }
    // array display

    for (int j = 0; j < 5; j++)
    {
        printf("%d th element is %d \n", j, array[j]);
    }
    return 0;
}