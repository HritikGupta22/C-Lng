//typecasting
#include<stdio.h>
int main(){
    int a=5;
    float b=54;
    float c=46/9;
    float d=(float)46/9;
    printf("the a is %d\t",a);
    printf("the a after typecast is %f\n",(float)a);
    printf("the b is %f\t",b);
    printf("the b after typecast is %d\n",(int)a);
    printf("the c is %f\n",c);
    printf("the c is %d\n",c);
    printf("the d is %f\n",d);
    return 0;
}