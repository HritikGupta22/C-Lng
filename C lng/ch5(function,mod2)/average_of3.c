#include<stdio.h>
double average(int,int,int);
int main(){
printf("the average of 3,4,5 is %lf\n",average(3,4,5));
return 0;
}
double average(int a, int b, int c){
return (a+b+c)/3;
}