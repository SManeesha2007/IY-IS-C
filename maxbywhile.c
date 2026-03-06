#include<stdio.h>
int main(){
	int n,r,large=0;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n=n/10;
		if(r>large){
			large=r;
	 }
}
	printf("%d is max",large); 
	return 0;
}
