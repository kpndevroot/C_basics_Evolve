#include <stdio.h>

int main()
{

    int n, reverse = 0, remainder, temp;
    // n=12
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    while (n != 0)
    {
        remainder = n % 10; // 1. 12%10=2 2.1%10=1

        reverse = reverse * 10 + remainder; // 1. 0*12+2=2 2. 2*10+1=21

        n /= 10; // 1.12/10=1  2.1/10=0
    }

    printf("Reversed number = %d", reverse);

    if (temp == reverse)
    {
        printf("is palindorme");
    }
    else
    {
        printf("is not palindorme");
    }
    return 0;
}