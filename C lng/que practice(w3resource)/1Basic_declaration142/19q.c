#include<stdio.h>
int main()
{
    int p,q,r,s;
    printf("enter p i.e even\n");
    scanf("%d",&p);
    printf("enetr q,r,s i.e positive\n");
    scanf("%d %d %d",&q, &r, &s);
    if ((q>r) && (s>p) && (r+s>p+q) && (r,s,q>0) && (p%2==0))
    {
        printf("corrrect value\n");
    }
    else
        printf("wrong value\n");

    return 0;
}