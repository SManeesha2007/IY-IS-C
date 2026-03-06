#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	mul(x,y);
	int res=div(x,y);
	return 0;
}
void mul(int m,int n){
	printf("%d\n",m*n);
}
int div(int m,int n){
	printf("%d",m/n);
	return m/n;
}
