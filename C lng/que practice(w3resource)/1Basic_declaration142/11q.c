#include<stdio.h>
int main()
{
    int no_item1 , no_item2;
    float weight_item1,weight_item2, avg;
    printf("enter weight of item 1\n");
    scanf("%f",&weight_item1);
    printf("enter no of item 1\n");
    scanf("%d",&no_item1);

    printf("enter weight of item 2\n");
    scanf("%f",&weight_item2);
    printf("enter no of item 1\n");
    scanf("%d",&no_item2);
    avg=((weight_item1*no_item1)+(weight_item2*no_item2))/(no_item1+no_item2);
    printf("%f",avg);
    return 0;
}