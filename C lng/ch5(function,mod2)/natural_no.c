// natural no. with while loop******
// #include<stdio.h>
// int main(){
// int a=1;
// int n;
// printf("enter the no. to get all natural betwn them\n");
// scanf("%d",&n);
// while(a<n){
// printf("%d\n",a);
// a++;
// }
// return 0;
// }
//natural no with help of for loop*******
/*#include<stdio.h>
int main(){
int n;
printf("enter the no. to get all natural betwn them:::");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    printf("%d\n",i);
}
return 0;
}
*/
// natural no with reverse order
#include<stdio.h>
int main(){
int n;
printf("enter the no. to get all reverse natural betwn them:::");
scanf("%d",&n);
for (int i = n; i; i--)   //when value of i become 0 condition gives false value and loop ended
{
    printf("%d\n",i);
}
return 0;
}
