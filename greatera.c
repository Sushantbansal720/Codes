#include <stdio.h>

int main ()
{
    int a,b;

    printf("Enter a value of a:");
    scanf("%d", &a);

    printf("Enter a value of b:");
    scanf("%d", &b);

    if(a>b)
    {
        printf("a's is a greater than for b's value");
    }
    else
    {
        printf("b's is a greater than for a's value");
    }
    
}