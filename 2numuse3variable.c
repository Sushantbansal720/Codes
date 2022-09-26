#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter a value for a");
    scanf("%d", &a);

    printf("Enter  value for b ");
    scanf("%d", &b);
    a = b;
    b = c;
    printf("Swapping the number");
    printf("value of a = %d", a);
    printf("value of b = %d", b);
    return 0;
}