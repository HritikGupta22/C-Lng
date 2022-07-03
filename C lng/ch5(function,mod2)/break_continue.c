// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 8; i++)
//     {
//         if (i==5)
//         {
//             break;
//         }
        
//         printf("%d\n",i);
//     }
//     printf("you are now come out of loop\n");

//     return 0;
// }
#include <stdio.h>
int main()
{
    for (int i = 0; i < 8; i++)
    {
        if (i==5)
        {
            continue;
        }
        
        printf("%d\n",i);
    }
    printf("you are now come out of loop\n");

    return 0;
}