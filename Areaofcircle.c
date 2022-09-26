#include <stdio.h>

int main() {
    /* Variable declaration part*/
    int r;
    float area;
    /*Reading part*/
    printf("Enter Radius:");
    scanf("%d", &r);
    /*processing part*/
    area=3.14*r*r;
    /*output part*/
    printf("\nArea of Circle = %f",area);

    return 0;
}