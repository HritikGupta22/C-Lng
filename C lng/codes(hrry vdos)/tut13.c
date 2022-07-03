#include<stdio.h>
int main(){
    int num,index=0;
    printf("enter the num");
    scanf("%d",&num);
    // do
    // {
    //     index=index+1;
    //     printf("%d",index);
    // } while (index< num);
    while (index<num)
    {
        printf("%d\t",index);
        index+=1;
        
    }
    
    return 0;
}