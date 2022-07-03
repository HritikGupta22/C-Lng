#include<stdio.h>
void main(){
    int age,dob;
    printf("enter your age\n");
    scanf("%d",&age);
    switch (age)
    {
    case 18:
        printf("your age is 18\n");
        printf("enter your date of birth\n");
        scanf("%d",&dob);
        switch (dob)
        {
        case 22:
            printf("welcome in party with ticket id 22");
            break;
        
        default:
            printf("your dob is not special you can't come to party");
            break;
        }
        break;
    case 12:
    printf("your age is 12 stay home"); 
    break;
    default:
        printf("YOUR AGE is not match in special ages");
        break;
    }
}