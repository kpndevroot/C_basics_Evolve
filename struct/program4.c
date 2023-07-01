#include <stdio.h>
#include <string.h>
// declaring structure

struct student
{
    char name[51];
    int roll_no;
    float marks;
    int age;
};

int main()
{

    struct student s1 = {"dora", 1, 80, 15};
    struct student s2 = {"buji", 2, 70, 16};

    struct student s3;
    s3.age = 10;
    s3.marks = 50.4;
    strcpy(s3.name, "bheem");
    // accessing members of the structures using dot operator

    printf("name of s1 is %s \n", s3.name);
    // printf("name of s2 is %s", s2.name);

    return 0;
}