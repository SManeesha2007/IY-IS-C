#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==5){
			break;
		}
		printf("%d",i);
	}
	printf("\ntask completed"); 
	return 0;
}
