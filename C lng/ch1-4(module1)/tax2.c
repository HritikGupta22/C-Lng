#include<stdio.h>
int main(){
int income;
float tax=0;
printf("enter your income");
scanf("%d\n",&income);
if(income<=250000){
printf("no need to pay tax");
}
else if(income>250000 && income<=500000){
printf("your income in between 2.5l to 5L");
tax=tax+0.05*(income-250000);
}
else if(income>500000 && income<=1000000){
printf("your income in btwn 5L to 10L");
tax=tax+tax+0.05*(income-250000);
tax=tax+0.2*(income-500000);
}
else{
printf("your income is above 10L");
tax= tax+tax+0.05*(income-250000);
tax=tax+0.2*(income-500000);
tax=tax+0.3*(income-1000000);
}
printf("your total tax is to be paid is %f",tax);

return 0;
}
