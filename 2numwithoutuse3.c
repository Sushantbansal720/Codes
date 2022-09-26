#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter a value for a");
    scanf("%d", &a);

    printf("Enter a value for b");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swapping the number");
    printf("value for a is %d", a);
    printf("value for b is %d", b);
    return 0;
}