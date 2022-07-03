#include<stdio.h>
int fabbi(int n){
    int f[n];
     f[0]=1;
     f[1]=1;
    
    for (int i = 2; i < n; i++)
    {
        f[i]=(f[i-1]+f[i-2])%10;
    }
    return f[n-1];
    
    
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fabbi(a));
    return 0;
}