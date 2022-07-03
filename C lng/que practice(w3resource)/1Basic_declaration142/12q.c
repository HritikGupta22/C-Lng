#include<stdio.h>
int main()
{
    int hr,amount_per_hr=15000,salary;
    char ID[10];
    printf("enetr employee ID\n");
    scanf("%s",&ID);
    printf("enter hours in month\n");
    scanf("%d",&hr);
    salary=hr*amount_per_hr;
    printf("employee Id= %s\n",ID);
    printf("salary= U$ %d\n",salary);
    return 0;
}