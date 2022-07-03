#include<stdio.h>
int main()
{
    float r,perimeter,area;
    float pi=3.14;
    printf("enter the value of radius of circle\n");
    scanf("%f",&r);
    printf("perimeter of the circle = %f\n",2*pi*r);
    printf("area of the circle = %f",pi*r*r);
    return 0;
}