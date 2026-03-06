#include<stdio.h>
int main(){
	int i=1,m,n,k;
	scanf("%d%d",&n,&m);
	while(i<=m){
		k=n*i;
		printf("%d X %d =%d\n",n,i,k);
		i++;
	}
	return 0;
}
