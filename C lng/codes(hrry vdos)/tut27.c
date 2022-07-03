#include <stdio.h>
int main()
{
    // int a = 5;
    // char c='z';
    // int *ptra = &a;
    // int *ptra2 = &c;
    // printf("the address value of int a is %d\n", &ptra);
    // printf("the address value of int a is %d\n", &ptra + 1);
    // printf("the address value of int a is %d\n", &ptra + 2);
    // printf("the address value of int a is %d\n", &ptra - 1);
    // printf("the address value of int a is %d\n", &ptra - 2);

    // printf("the address value of charcter c is %d\n", &ptra2);
    // printf("the address value of charcter c is %d\n", &ptra2+1);
    // printf("the address value of charcter c is %d\n", &ptra2-1);
    int arr[5]={1,2,3,4,5};
    printf("value of first position of array is %d\n",arr[0]);
    printf("address of first position of array is %d\n",&arr[0]);
    printf("address of first position of array is %d\n",arr);
    printf("value of second position of array is %d\n",arr[1]);
    printf("address of second position of array is %d\n",&arr[1]);
    printf("address of second position of array is %d\n",&arr+1);
    ///////////////////////////////////////////////////////////////////////////////////////////
  
    printf("value at adress first position of array is %d\n",*(&arr[0]));
    printf("value at adress first position of array is %d\n",*(arr));
    printf("value at adress second position of array is %d\n",*(&arr[1]));
    printf("value at adress second position of array is %d\n",*(arr + 1));
    return 0;
}