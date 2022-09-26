#include <stdio.h>

void main ()
{
    int num ;
    printf("Enter a Number\n");
    scanf("%d", &num);
    if(num > 0)
    printf("%d is a Positive Number \n", num);
    else if(num < 0)
    printf("%d is a Negetive Number\n", num);
    else 
    printf("0 is neither positive nor negetive");

    return 0;


}