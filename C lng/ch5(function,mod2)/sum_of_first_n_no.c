#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("enetr the no:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("the sum of first n natural number is %d\n", sum);
    return 0;
}