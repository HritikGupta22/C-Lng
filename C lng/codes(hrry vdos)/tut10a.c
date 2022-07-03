#include<stdio.h>
void main(){
    int math,chem;
    printf("enter your marks of math and chemistry\n");
    scanf("%d %d",&math,&chem);
    if (math>33 && chem>33)
    {
        printf("you get prize of 5k");
    }
    else if(math>33 && chem<=33){
        printf("passed in math, you get prize of 1k");
    }
    else if(math<=33 && chem>33){
        printf("passed in chemsitry, you get prize of 1k");
    }
    else{
        printf("sorry you are fail No reward for you:::: better luck next time");
    }
    
}