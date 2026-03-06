#include<stdio.h>
int fact(int);
int main(){
	int n;
	scanf("%d",&n);
	int res=fact(n);
	printf("%d",res);
	return 0;
}
int fact(int m){
	int fact=1,i;
	for(i=m;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}
