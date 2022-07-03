#include<stdio.h>
int main(){
int n;
printf("enter the no. to check prime or not:::");
scanf("%d", &n);
for(int i=2;i<n;i++){
    if(n%i==0){
    printf("it is not prime\n");
    break;
    }
    else{
        printf("it is a prime\n");
        break;
    }

}
return 0;
}