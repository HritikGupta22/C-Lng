#include<stdio.h>
int main()
{
    int a=15;
    int *pointer_a = &a;
    printf("%d\n",a); 
    printf("%d\n",&a); 
    printf("%d\n",&pointer_a); 
    printf("%d\n",*pointer_a); 
    return 0;
}