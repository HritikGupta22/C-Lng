#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5}, sum=0;
    for(int i=0;i<5;i++){
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}