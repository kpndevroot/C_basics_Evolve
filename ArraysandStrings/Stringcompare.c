#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2, and print the result
    // printf("%d\n", strcmp(str1, str2));
    int c = strcmp(str1, str3);
    // printf("%d", c);
    if (c == 0)
    {
        printf("%s and %s string is equal ", str1, str2);
    }
    else
    {
        printf("strings are not equal");
    }

    // Compare str1 and str3, and print the result
    // printf("%d\n", strcmp(str1, str3));

    return 0;
}