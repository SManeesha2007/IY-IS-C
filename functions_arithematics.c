#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int sum=add(x,y);
	int diff=sub(x,y);
	int pro=mul(x,y);
	int by=div(x,y);
	printf("Addition is %d\n",sum);
	printf("Subtraction is %d\n",diff);
	printf("Multiplication is %d\n",pro);
	printf("Division is %d\n",by);
	return 0;
}
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
