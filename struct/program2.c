#include <stdio.h>
#include <string.h>
// struct myStructure
// {
//     int myNum;
//     char myLetter;
//     char myString[30];
// };

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
    float avg;

}

int
main()
{
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text", 1.5};

    // // Modify values
    // s1.myNum = 30;
    // s1.myLetter = 'C';
    // strcpy(s1.myString, "Something else");

    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}