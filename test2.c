#include<stdio.h>
int main(){
	int amt,x,y,z,k,m,sum;
	scanf("%d",&amt);
	if(amt%100==0){
		x=amt/2000;
		printf("2000-%d\n",x);
		y=amt%2000;
		k=y/500;
		m=y%500;
		printf("500-%d\n",k);
		z=m/100;
		printf("100-%d\n",z);
		sum=x+k+z;
		printf("total notes are %d\n",sum);	
	}
	else{
		printf("please enter the amount is multiple of 100");
	}
	
	return 0;
}
	

