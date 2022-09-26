#include <stdio.h>
int main ()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 1:
        printf("The age is 1");
        switch (marks)
        {
        case 45:
            printf("The marks is 45");
            break;
        
        default:
            printf("The marks is not 45");
            break;
        }
    case 3:
         printf("The age is 3");
         break;

    case 4:
         printf("The age is 4");
         break;

    default:
        printf("The age is not 1, 3 or 4");
        break;
    }
     return 0;
}    

