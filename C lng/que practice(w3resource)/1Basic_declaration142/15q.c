#include<stdio.h>
#include<math.h>
int main()
{
    float dis;
    int x1,y1,x2,y2;
    printf("enetr x1,y1 & x2,y2\n");
    scanf("%d %d %d %d",&x1,&y1, &x2,&y2);
    dis =  sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%f",dis);
    return 0;
}