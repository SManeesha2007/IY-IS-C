#include<stdio.h>
int main(){
	int n,r,sum=0,pro=1; 
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		printf("%d ",r);
		sum=sum+r;
		pro=pro*r;
	}
	printf("\n%d\n%d\n%d",sum,pro,pro-sum);
	return 0;
}
