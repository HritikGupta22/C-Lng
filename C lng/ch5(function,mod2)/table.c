#include <stdio.h>
int main()
{
    int a;
    printf("enter the no. for get table of that no.");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d=%d\n",a ,i , a * i);
    }

    return 0;
}

// *************************table in reverse*********************************************
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("enter the no. for get table of that no.");
//     scanf("%d", &a);
//     for (int i = 10; i ; i--)
//     {
//         printf("%d X %d=%d\n",a ,i , a * i);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a;
//     int sum=0;
//     printf("enter the no. for get table of that no.");
//     scanf("%d", &a);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d=%d\n",a ,i , a * i);
//         sum += a*i;
//     }
// printf("the sum of all no. in table is %d\n",sum);
//     return 0;
// }