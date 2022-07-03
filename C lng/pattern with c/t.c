#include <stdio.h>

int main(void) {
	int T,X,Y,Z,P;
	scanf("%d",&T);
	scanf("%d %d %d",&X,&Y,&Z);
	for(int i=1;i<=T;i++){
	    P=(Z-Y)*X;
	   printf("%d %d %d\n",X,Y,Z);
	   printf("%d",P);
	   break;
	}
	
	return 0;
}

