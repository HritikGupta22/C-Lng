#include <stdio.h>
int main()
{
    char name[50];
    int dob;
    long double num;    

    printf("enter your name\n");
    scanf("%s", &name);
    printf("enter date of birth\n");
    scanf("%d", &dob);
    printf("enter your mobile no.\n");
    scanf("%lf", &num);
    printf("name=%s\n", name);
    printf("DOB=%d\n", dob);
    printf("mobile=%lf\n", num);
    return 0;
}