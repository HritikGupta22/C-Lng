#include<stdio.h>
int main(){
int a,b;
printf("enter the value of a\n",a);
scanf("%d",&a);
printf("enter the value of b\n",b);
scanf("%d",&b);
//if true then show no.5
//if false then show no. 7
int c = (a==b)?5:7;
printf("the value of c is %d",c);
return 0;
}
