#include<stdio.h>
int main()
{
     int a[3] ;
     float p;
    printf("enter five nos\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    if (a[0]+a[1]>a[2] && a[1]+a[2]>a[0] && a[0]+a[2]>a[1])
    {
        p=a[0]+a[1]+a[2];
        printf("%f",p);
    }
    else 
        printf("triangle is not valid");
    
    return 0;
}  