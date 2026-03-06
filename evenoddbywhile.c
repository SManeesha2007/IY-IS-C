#include<stdio.h>
int main(){
	int n,r,sum=0,add=0;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		if(r%2==0){
			sum=sum+1;
		}
		else if(r%2!=0){
			add=add+1;
		}
	}
	if(sum==add){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
