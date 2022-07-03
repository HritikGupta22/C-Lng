#include<stdio.h>
int sum(int a,int b);
void printstar(int n){
 
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');
    }
    
}
int takenum(){
    int i1;
    printf("enetr a no");
    scanf("%d",&i1);
    printf("the no entered is %d",i1);
}
int main(){

    int x=sum(5,7);
    printf("%d\n",x);
    printstar(8);
    int Y=takenum();
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}