#include<stdio.h>
int main(){
int P,C,M;
printf("enter the marks of phy\n",P);
scanf("%d",&P);
if(P>33){
printf("U passed in phy");
}
else{
printf("U failed in phy");
}

printf("enter the marks of chem\n",C);
scanf("%d",&C);

if(P>33){
printf("U passed in chem");
}
else{
printf("U failed in chem");
}

printf("enter the marks of maths\n",M);
scanf("%d",&M);
if((P+C+M)/3 >40){
printf("congrats you passed in exam");
}
else{
printf("bester luck try again");
}
if(P>33){
printf("U passed in math");
}
else{
printf("U failed in math");
}


return 0;
}
