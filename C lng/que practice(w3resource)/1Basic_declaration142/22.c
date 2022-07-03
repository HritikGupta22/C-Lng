#include <stdio.h>
int main()
{
    int a[5], total =0;
    printf("enter five nos\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j=0; j< 5; j++){
        if(a[j]%2 != 0){
            total  += a[j];
        }
    }
    printf("sum of odd nos: %d",total);

    return 0;
}