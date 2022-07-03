#include<stdio.h>
int main()
{
    int perimeter,area;
    int height_in_inches=7 ;
    int width_in_inches=5 ;
    perimeter=2*(height_in_inches+width_in_inches);
    area=(height_in_inches*width_in_inches);
    printf("perimete of rectangle=%d inches\n",perimeter);
    printf("area of rectangle=%d squre inches",area);

    return 0;
}