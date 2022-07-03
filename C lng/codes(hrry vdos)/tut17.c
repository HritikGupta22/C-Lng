#include<stdio.h>
int main(){
    
    // printf("hello\n");
    // label : printf("hi i'm in label\n");
    // goto end; 
    // goto label;
    // end :printf("we are at end");
    int num;
    for ( int i = 0; i < 9; i++)
    {
        printf("i=%d",i);
        for (int j = 0; j < 9; j++)
        {
            printf("j=%d \t Enter the no & if 0 exit the loop through goto",j);
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    end: printf("now end from all loops");
    return 0;
}