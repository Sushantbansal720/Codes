#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3");
        switch (marks)
        {
        case 99:
            printf("your marks are 99 ");
            break;
        
        default:
            printf("your marks are not 99");
        }
        break;

    case 13:
        printf("The age is 13");
        break;

    case 23:
        printf("The age is 23");
        break;

    case 45:
        printf("The age is 45");
        break;

    case 56:
        printf("The age is 56");
        //break;        

    
    default:
    printf("Age is not 56, 3, 13 or 23");
        break;
    }


    return 0;
}    