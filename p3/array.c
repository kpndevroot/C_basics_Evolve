#include <stdio.h>
int main()
{

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the a[%d] element = ", i);
        scanf("%d", &array[i]);
    }
    // printing elements of an array using loop

    printf("\n array Elements are...");
    for (int i = 0; i < 5; i++)
    {
        printf("\na[%d] = %d", i, array[i]);
    }

    return 0;
}