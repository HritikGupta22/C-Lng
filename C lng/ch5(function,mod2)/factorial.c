#include<stdio.h>
int main(){
int n;
int factorial=1;
printf("eneter the no. for factorial::");
scanf("%d", &n);
for(int i=1;i<=n;i++)
{
    factorial *=i;
}
printf("the factorial of that no. is %d\n",factorial);
return 0;
}