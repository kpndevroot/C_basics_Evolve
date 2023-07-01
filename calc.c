// a calculator that perform addition substraction muliplication division
// each operation perfromed by diffrent funtions

// needs

// 1.firstnum,secondnum,result,choice
// funtions:- add() sub() div() mul()
// switch statement

#include <stdio.h>
// my functions

// adding funciton
void add(int a, int b)
{
    printf("perfoming addition \n");
    printf("result is %d", a + b);
}

void sub(int a, int b)
{
    printf("perfoming substaction \n");
    printf("result is %d", a - b);
}
void mul(int a, int b)
{
    printf("perfoming multiplication \n");
    printf("result is %d", a * b);
}

void div(int a, int b)
{
    printf("perfoming division \n");
    printf("result is %d", a / b);
}
// main function
int main()
{
    // declaring variables
    int firstnum, secondnum, choice;

    printf("1.addition \t 2.substraction \t 3.muliplication \t 4.division \n");

    // read the firstnumber
    printf("enter the first number = ");
    scanf("%d", &firstnum);

    // read the second number
    printf("enter the second number = ");
    scanf("%d", &secondnum);

    // reading the user choice
    printf("enter your choice = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        add(firstnum, secondnum);
        break;
    case 2:
        sub(firstnum, secondnum);
        break;
    case 3:
        mul(firstnum, secondnum);
        break;
    case 4:
        div(firstnum, secondnum);
        break;
    default:
        printf("invalid operation");
        break;
    }

    return 0;
}