#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    // true && true then result true other cases result is false
    // true || false then result true
    // false || true then result true

    if (n == 0 || n == 1)
        flag = 1; // not prime

    for (i = 2; i <= n / 2; ++i)
    {
        // printf(" i= %d \t", i);
        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}
// 13
// 13/2 = 6

// 6 5 4 3 2

// % ==0