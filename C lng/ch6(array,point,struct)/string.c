#include<stdio.h>
#include<string.h>
int main()
{
    char name[3]={'m','y','\0'};
    char str1[56], str2[87],str3[34];
    strcpy(str1, name);
    printf("%s|",str1);
    strcpy(str2, "\nharry\n");
    printf("%s|",str2);
    strcpy(str3, "rohan\n");
    printf("%s|",str3);
    strcat(str1,str2);

    
    printf("%s",str1);
    return 0;
}