#include<stdio.h>
int main(){
    // int marks[4];
    // marks[0]=3;
    // marks[1]=4;
    // marks[2]=5;
    // marks[3]=6;
    // marks[0]=36;
    // for (int i = 0; i < 4; i++)
    // {
    // printf("%d\n",marks[i]);
    // }
    //*************************************************************************************
   
    // int marks[4]={11,02,03,04};
    //  for (int i = 0; i < 4; i++)
    // {
    //     printf("the value of %d element of array is %d\n",i, marks[i]);
    // }
    //*********************************************************************************
    // int n;
    // printf("enter the size of array>>>>--");
    // scanf("%d",&n);
    // int marks[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the %d elemnts of array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value of %d element of array is %d\n",i, marks[i]);
    // }
    //*******************************************************************************2d array******
    int mark[2][4]={{2,3,5,6},{7,8,6,8}};
    for (int  i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d row %d colomn is %d\n",i+1,j+1,mark[i][j]);
            printf("%d",mark[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}