#include<stdio.h>
// sum of n natural no sum(n)=1+2+3+3...+n
// ..................sum(n)=sum(n-1)+n
int sum(int);
int main(){
    int n=5;
    printf("sum of first %d natural no is %d\n", n,sum(n));
return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+ n;
}