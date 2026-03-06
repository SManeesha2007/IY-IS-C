#include<stdio.h> 
#include<math.h>                             //armstrong number means digit^no of digits
int armstrong(int);                         // function prototype
 int main(){                               // ex:153=1^3+5^3+3^3=1+125+27=153
    int n;                                // ex:9=9^1=9
    scanf("%d",&n);
	int res=armstrong(n);
	if(n==res){
		printf("it is armstrong number");
	} 
	else{
		printf("it is not armstrong number");
	}
	return 0;
}
int armstrong(int n){
	int r,sum=0,digits=(int)log10(n)+1; 
	while(n>0){
	r=n%10;
	n=n/10;
	sum=sum+(int)pow(r,digits);	
	}
	return sum;
} 
