#include <stdio.h>

void main ()
{
    int num;

    printf("Enter a value");
    scanf("%d", &num);

    if (num > 56)
    printf("%d is a Positive Number\n", num);

    else if (num < 45)
    printf("%d is a Negetive Number\n", num);

    else
    printf("24 is not positive or not Negetive");
}