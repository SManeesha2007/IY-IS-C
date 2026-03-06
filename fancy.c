#include<stdio.h>
int main(){
	int n,r,s=0;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		r=r+s;
	}
		if(r==s){
			printf("fancy");
		}
		else{
			printf("not a fancy");
		}
	return 0;
}
