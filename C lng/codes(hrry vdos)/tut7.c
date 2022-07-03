#include<stdio.h>
int main(){
    int a = 8,b=3;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%f\n",(float)a/b);
    printf("a%b=%d\n",a%b);
    printf("a&b=%f\n", a&b);
    printf("a|b=%d\n",a|b);
    printf("a^b=%d\n",a^b);
    printf("~b=%d\n",~b);
    int x=0, y=3;
    printf("x&&y=%d\n",x&&y);
    printf("x||y=%d\n",x||y);
    printf("x!=y=%d\n",x!=y);
}