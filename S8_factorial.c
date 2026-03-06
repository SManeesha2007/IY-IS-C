#include<stdio.h>
int main(){
	int i,n,fac=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fac=fac*i;
	}
	printf("factorial=%d",fac);
	return 0;
}
