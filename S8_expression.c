#include<stdio.h>
#include<math.h>
int main(){
	int i,x,n,sum=1;
	scanf("%d%d",&x,&n);            //sum=1+x^1+x^2+x^3.....x^n
	for(i=1;i<=n;i++){
		sum=sum+(int)pow(x,i);       //(int was kept before pow to change double to int)
	}
	printf("%d",sum);
	return 0;
}
