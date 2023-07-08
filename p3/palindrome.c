#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    // 11
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;           // 1.11%10 = 1; 2.1%10 =0
        sum = (sum * 10) + r; // 1. 0*10+1=1; 2.1*10+1=11
        n = n / 10;           // 1.11/10=1 2.0/10=0
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
    return 0;
}
