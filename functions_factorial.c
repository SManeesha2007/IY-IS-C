#include<stdio.h>
int factorial(int);
int main(){
	int n;
	scanf("%d",&n);
	int res=factorial(n);
	printf("factorial of %d is %d",n,res);
	return 0;
}
int i,fac=1;
int factorial(int x){
	for(i=x;i>=1;i--){
		fac=fac*i;
	}
	return fac;
}
