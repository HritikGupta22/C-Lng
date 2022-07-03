#include <stdio.h>
int main()
{
    float c;
    float F; 
    printf("enter the temp in celcius\n");
    scanf("%f", &c);
    F = c * (9.0/5.0) + 32;
    
    printf("your temp in fareheight is:%f", F);
    return 0;       
}