#include<stdio.h>
    int fib_recursive(int n){
        if (n==1 || n==2)
        {
            return n-1;
        }
        else return fib_recursive(n-2) + fib_recursive(n-1);
    }
    int fib_itrative(int n){
        int a=0;
        int b=1;
        for (int i = 0; i < n-1; i++)
        {
           b=a+b;
           a=b-a;
        }
        return a;
    }

void main(){
    int num;
    printf("enter the nth positon in fabinacco series with recursion\n");
    scanf("%d",&num);
    printf("from recursive %d\n",fib_recursive(num));
    printf("from itrative %d\n",fib_itrative(num));

    
}