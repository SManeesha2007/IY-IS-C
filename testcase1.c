#include<stdio.h>
int reverse(int);
int main(){
	int n;
	scanf("%d",&n);
	int res=reverse(n);
	if(n==res){
		printf("%d is palindrome",n);
	}
	else{
		printf("%d is not palindrome",n);
	}
	return 0;
}
int reverse(int n){
	int r,sum=0;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum*10+r;
	}
	return sum;
}
