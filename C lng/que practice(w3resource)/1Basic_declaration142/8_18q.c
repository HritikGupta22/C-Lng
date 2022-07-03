#include<stdio.h>
int main()
{
    int yr,days, weeks;
    printf("enter days\n");
    scanf("%d",&days);
    yr=(days/365);
    weeks=(days%365)/7;
    days=(days%365)%7;
    printf("year=%d\n",yr);
    printf("week=%d\n",weeks);
    printf("days=%d\n",yr);
    return 0;
}