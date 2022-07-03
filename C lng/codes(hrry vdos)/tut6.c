#include<stdio.h>
int main()
{
    printf("int= %lu byte\n",sizeof(int));
    printf("char= %lu byte\n",sizeof(char));
    printf("float= %lu byte\n",sizeof(float));
    printf("double= %lu byte\n",sizeof(double));
    printf("long= %lu byte\n",sizeof(long));
    printf("long double= %lu byte\n",sizeof(__SIZEOF_LONG_DOUBLE__));
    return 0;
}