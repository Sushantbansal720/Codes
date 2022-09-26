#include <stdio.h>

int main ()
{
    int i, age;
    for(i = 0; i < 5; i ++)
    {
        printf("Iteration time %d\nEnter your age:",i);
        scanf("%d", &age);
        //if(age>10)
        //{
        //break;
        //}
        if(age>10)
        {continue;}
        printf("Hey Guys\n");
        printf("This code is printed to visual studio code\n");
        printf("Checking the Continue statement\n\n");
    }
    return 0;
}