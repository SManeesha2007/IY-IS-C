#include<stdio.h>
int main(){
	int n,r,small=9;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		if(r<small){
			small=r;
		}
	}
	printf("%d is min",small);
	return 0;
}
