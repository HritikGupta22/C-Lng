// #include <stdio.h>
// int main(void){
//     int n;
//     int count=0;
//     scanf("%d",&n);
//     // Here your code !
//     for(int i=1; i<=n; i++){
//         count+=i;
        
//     }
//     printf("%d ",count);
// }
#include <stdio.h>
int main(){
    int n;
    int arr[n];
    int count=0;
    scanf("%d",&n);
    // Here your code !
    for(int i=0; i<n; i++){
        printf("no- %d",i+1);
        scanf("%d",&arr[i]);
        count += arr[i];
    }
    printf("\n");
    
    printf("%d ",count);
}