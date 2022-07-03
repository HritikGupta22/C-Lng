#include<stdio.h>
#include<stdlib.h>


int maxproduct(int a[] ,int n){
    int max= a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }   
    }
    int sec_max=a[0];
       for (int i = 0; i < n; i++)
    {
        if (a[i]>sec_max && a[i] != max)
        {
            sec_max=a[i];
        }   
    }

    return max*sec_max;
}
int main()
{
    int arr[5]={2,3,4,5,6};
    printf("%d\n", maxproduct(arr,5));
    return 0;
}