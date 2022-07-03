#include<stdio.h>
int main(){
int a,b=2,c=3;
printf("enter the no.\n",a);
scanf("%d",&a);
if(a%b==0&&a%c==0){
printf("no. is divisible by 6");
}
else{
printf("no. is not divis. by 6");
}

return 0;
}
