#include <stdio.h>

int main()
{

    // n="no of elements"
    // i  for loop var
    // sum sum
    // x= read element
    int n, i;
    float sum = 0, x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\nEnter %d elements\n\n", n); // 1 2 3
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x); // 1.x=1 2.x=2 3.x=3 
        sum += x; //1.sum=1 2.sum=1+2=3 3.sum=3+3=6
        // sum = sum+x
    }
    printf("\n\nAverage of the entered numbers is =  %f", (sum / n));

    return 0;
}