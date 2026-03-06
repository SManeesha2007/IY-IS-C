#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n); 
	int res=reverse(n); 
	printf("%d\n",res);
	if(n==res){
		printf("it is palindrom");  
	}
	else if(n!=res){
		printf("not a palindrom");
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
