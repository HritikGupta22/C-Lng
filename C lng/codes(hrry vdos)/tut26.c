#include<stdio.h>
int main(){
    int a=76;
    int* ptra=&a;
    int* ptra2;
    // int* ptra3=NULL;

    printf("the value of a is %d\n",a);
    printf("the value of a form ptr is %d\n",*ptra);
    printf("the adress of a is %p\n",&a);
    printf("the adress of a from pointer is %p\n",ptra);
    printf("the adress  of pointer ptra is %p\n",&ptra);
    printf("the adress of some garbage is %p\n",ptra2);
    
    // printf("the adress of some garbage is %p\n",ptra3);
    
    return 0;
}