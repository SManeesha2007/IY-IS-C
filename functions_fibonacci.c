#include<stdio.h>
void fibonacci(int);
int main(){
	 int n;
	 scanf("%d",&n);
	 fibonacci(n);
	 return 0;
}
void fibonacci(int n){
	int a=0,b=1,c;
	printf("%d %d ",a,b);
	c=a+b;
	while(c<=n){
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
