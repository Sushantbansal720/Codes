#include <stdio.h>

int main ()
{
	int i, age;
	for(i = 0; i < 5; i++)\
	{
		printf("Iteration time = %d\nEnter your age:", i);
		scanf("%d", &age);
		if(age>100)
    {
		break;
	}
	}return 0;
}