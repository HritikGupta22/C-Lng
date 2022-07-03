#include<stdio.h>
int main(){
int a;
printf("enter the age of person\n",a);
scanf("%d",&a);
if(a>=18){
printf("congratulation,you are eligible to flight");
}
else if(a>=15){
printf("not eligible to flight,but you can take ticket of train");
}
else{
printf("||||SORRY,STAY HOME STAY SAFE||||");
}
return 0;
}
