#include<stdio.h>
chngevalue( int *address){
    *address= 49;
    return *address;
}
int main()
{
    int a= 5;
    printf("the value of a is %d\n",a);
    chngevalue(&a);//call byb reference
    printf("the value of a after chnge through adress is %d\n",a);
    return 0;
}