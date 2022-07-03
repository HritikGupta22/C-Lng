#include<stdio.h>
int main()
{
    char buffer[100];
    unsigned long ul;
    long ln;
    printf("\nInput an unsigned no: ");
    fgets(buffer,100,stdin);
    ul = strtoul(buffer,NULL,0);
    printf("output : %lu\n\n",ul);
    ln = strtol(buffer,NULL,0);
    printf("output : %ld\n\n",ln);


    return 0;
}