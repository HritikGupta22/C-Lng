#include<stdio.h>
int main(){
int P,C,M;
printf("enter the marks in phy\n");
scanf("%d",&P);
printf("enter the marks in chem\n");
scanf("%d",&C);
printf("enter the marks of maths\n");
scanf("%d",&M);

float Total=(P+C+M)/3;
if(Total>=40){
  if(P<33||C<33||M<33){
  printf("sorry your marks in one of each sub less than 33 means failed in exam");
  }
  else{
  printf("congratulation you passed");
  }
}
else{
printf("soryy better luck next time because your marks less than 40%");
}

return 0;
}
