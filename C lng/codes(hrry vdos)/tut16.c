#include<stdio.h>
int main(){
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("i=%d\n enter your age\n",i);
        scanf("%d",&age);
        if (age>5)
        {
            printf("age is greater than 5 age=%d\n",age);
            continue;
        }
        else{
            printf("age is less than 5 age=%d\n",age);
            break;
        }
        
    }
    return 0;
    
}