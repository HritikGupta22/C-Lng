#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1, root2;
    printf("enter a,b,c");
    scanf("%d %d %d", &a,&b, &c);
    root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("root1= %f",root1);
    printf("root2= %f",root2);
    return 0;
}