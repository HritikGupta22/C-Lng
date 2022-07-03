#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	int x[t],y[t],z[t],profit[t];
	for(int i=0;i<t;i++){
	    scanf("%d %d %d", &x[i],&y[i],&z[i]);
	    int a=x[i]*y[i],b=x[i]*z[i];
	    profit[i]=b-a;
	    printf("\n");
	}
	for(int i=0;i<t;i++){
	    if(profit[i]>0){
	        printf("%d\n",profit[i]);
	        
	    }else continue;
	}
	
	return 0;
}


