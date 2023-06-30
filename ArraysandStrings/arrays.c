#include <stdio.h>
#include <string.h>

int main()
{

    char name[10] = "John"; // ['j','o','h','n']

    // printf("Name: %c\n", name[2]);

    for (int i = 0; i < 4; i++)
    {
        printf("%c \t", name[i]);
    }
    // strcat(name, " Doe");
    // printf("Full name: %s\n", name);

    return 0;
}
