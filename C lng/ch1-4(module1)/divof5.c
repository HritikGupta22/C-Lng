#include<stdio.h>
int main(){
int a,b=5;
printf("enter the no.\n",a);
scanf("%d",&a);
if(a%b==0){
printf("divisible by %d",b);
}
else{
printf("not divisible by %d",b);
}
return 0;

}
