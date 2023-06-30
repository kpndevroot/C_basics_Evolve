#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[20] = "john";
    char secondname[10] = "jacob";
    strcat(firstname, secondname);
    printf("FullName is %s ", firstname);
    return 0;
}