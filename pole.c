#include<stdio.h>
int factorial(int n){
	int i,fac=1;
	for(i=n;i>=1;i--){
		fac=fac*i;
	}
	return fac;
}
int main(){
	int m,n,o;
	scanf("%d%d%d",&m,&n,&o);
	int res1=factorial(m);
	int res2=factorial(n);
	int res3=factorial(o);
	printf("for m -%d\n",res1);
	printf("for n -%d\n",res2);
	printf("for o -%d\n",res3);
	return 0;
}
