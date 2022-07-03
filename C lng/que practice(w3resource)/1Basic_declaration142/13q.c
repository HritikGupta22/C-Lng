// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter the nos\n");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a>b && a>c)
//     {
//         printf("greatest=%d\n",a);
//     }
//     if (b>a && b>c)
//     {
//         printf("greatest=%d\n",b);
//     }
//     if (c>a && c>b)
//     {
//         printf("greatest=%d\n",c);
//     }
    
//     return 0;
// }#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;
}
