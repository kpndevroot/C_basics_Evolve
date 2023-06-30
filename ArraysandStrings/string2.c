#include <stdio.h>
#include <string.h>
int main()
{
    char msg[] = "hello";
    int i;

    for (i = 0; i < strlen(msg); ++i)
    {
        printf("%c\n", msg[i]);
    }

    return 0;
}