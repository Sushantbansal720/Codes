#include <stdio.h>

int main ()
{
    int age, marks;
    printf("Enter the age\n");
    scanf("%d\n", &age);

    printf("Your marks are\n");
    scanf("%d\n", &marks);

    switch (age)
    {
    case 1:
        printf("The age is 1");
        switch (marks)
        {
        case 67:        
            printf("Your marks are 67");
            break;
        
        default:
        printf("your marks are not 67");
            break;
        }
        break;
    case 2:
          printf("The age is 2");
          switch (marks)
          {
          case 99:
            printf("your marks is 99");
            break;
          
          default:
              printf("your marks is not 99");
            break;
          }
          
    
    default:
    printf("The age is not 1, 2");
        break;
    }
     return 0;
}     