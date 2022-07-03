#include<stdio.h>
void main(){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=24){
        printf("you can vote");
    }
    else if(age>=18){
        printf("you can vote only for state level");
    }
    else{
        printf("sorry you can't vote");
        }
}