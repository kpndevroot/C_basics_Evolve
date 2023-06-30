#include <stdio.h>
#include <stdbool.h>
// declaring functions

void addTwonumber(int a, int b)
{
    printf("%d + %d = %d", a, b, a + b);
}
int addTwonumberReturn(int a, int b)
{
    return a + b;
}
bool boolfun()
{
    return false;
}
bool votecheck(int age)
{
    if (age < 18)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void checkvote(int age)
{
    if (age < 18)
    {
        printf("%d age not eligible for voting \n", age);
    }
    else
    {
        printf("%d age eligible for voting \n", age);
    }
}
int main()
{
    checkvote(16);
    checkvote(21);
    return 0;
}