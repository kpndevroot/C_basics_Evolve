#include <stdio.h>
int main()
{
    int first, second, temp;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
 
    // value of first is assigned to temp
    // temp 0,first=1,second=2;
    temp = first; // temp=1

    // value of second is assigned to first
    first = second; //first=2

    // value of temp (initial value of first) is assigned to second
    second = temp; //second=1

    // %.2lf displays number up to 2 decimal points
    printf("\nAfter swapping, first number = %d\n", first);
    printf("After swapping, second number = %d", second);
    return 0;
}
