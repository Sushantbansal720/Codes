#include <stdio.h>

int main ()
{
    int Age;
    printf("Enter your age;");
    scanf("%d", &Age);

    if (Age>=18)
    {
        printf("You are the aligible for voting");
    }
    else
    {
        printf("You are not aligible for voting");
    }
    return 0;
}