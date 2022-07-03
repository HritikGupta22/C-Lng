#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 2 no.s for LCM\n", a, b);
    scanf("%d %d", &a, &b);

    for (int i = (a>=b)?a:b ; i <= a*b; i++)
    {
        if(i%a==0 && i%b==0){
            printf("LCM is %d\n",i);
            break;
        }
     
    }

    return 0;
}