#include<stdio.h>
int main(){
	int n,r,sum=0;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		if(r==0){
			sum=sum+1;
		}
	}
	printf("no of zeroes are %d",sum);
	return 0;
}
