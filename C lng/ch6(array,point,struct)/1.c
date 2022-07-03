#include<stdio.h>
int main()
{
    int a[5];
    printf("enter the array elements:");
    for(int i=0;i<5;i++){
        scanf("%d ", &a[i]);
    }
    for ( int i = 0; i < 5; i++)
    {
    printf("%d ",a[i]);
    }
    
    return 0;
}