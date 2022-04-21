#include <stdio.h>
int main()
{
    double  height,base,area;

    printf("Enter Height : ");
    scanf("%lf",&height);

    printf("Enter Base : ");
    scanf("%lf",&base);

    area=(height*base)/2;

    printf("Area of a Triangle : %lf",area);

    return 0;
}
