#include<stdio.h>
int reverse(int n){
	int r,sum=0;
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
int main(){
	int n,res;
	scanf("%d",&n);
	res=reverse(n);
	if(n==res){
		printf("yes,it is a palindrom");
	}
	else{
		printf("it is not a palindrom");
	}
	return 0;
}
