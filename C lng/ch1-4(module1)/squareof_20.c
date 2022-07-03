// A program to calculate square of first 20 no.
# include<stdio.h>
# include<conio.h>
main()
{
int i;
for(i=1;i<=20;i++)
printf("\n the square of a %d is=%d",i,square(i));
getch();
return 0;
}
square(int x)//called function
{
int j;
j=x*x;
return(j);
}
