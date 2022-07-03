#include<stdio.h>
int main()
{
    int a;
    printf("enter the no.\n");
    scanf("%d",&a);
    if (a>0 && a<=20)
    {
        printf("Range[0,20]");
    }
   else  if (a>0 && a<=40)
    {
        printf("Range[0,40]");
    }
    else if (a>0 && a<=60)
    {
        printf("Range[0,60]");
    }
    else if (a>0 && a<=80)
    {
        printf("Range[0,80]");
    }
    else
        printf("error");
    return 0;
}
