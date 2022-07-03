#include<stdio.h>
int main()
{
        int a[10];
    printf("Input 10 elements in the array :\n");
    for(int i=0; i<10;i++){
        printf("elements- %d :",i);
        scanf("%d", &a[i]);
    }
    // for(int i=9; i>0; i--){
    //     printf("%d ",a[i]);
    // }
     for(int i=0; i<10; i++){
        printf("%d ",a[9-i]);
    }
    return 0;
}