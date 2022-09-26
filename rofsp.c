#include <stdio.h>

int main ()
{
    int r;
    float Volume_sphere;
    printf("Enter Radius:");
    scanf("%d",&r);
    Volume_sphere = (4/3.0)*3.14*r*r*r;
    printf("\nVolume of Sphere = %f", Volume_sphere);


    return 0;
}