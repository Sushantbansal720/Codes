#include <stdio.h>
#include <conio.h>

int main ()
{
    int P;
    printf("Enter the value of P:");
    scanf("%d", &P);
    P--;
    printf("%d", P--);
    return 0;
}