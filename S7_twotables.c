#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("9 X %d = %d   10 X %d =%d\n",i,i*9,i,i*10);
	}
	return 0;	
} 
