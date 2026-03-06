#include<stdio.h>
int factors(int);
int main(){
	int n;
	scanf("%d",&n);
    int res=factors(n);
    printf("\n%d",res);
	return 0;
}
int factors(int m){
	int i,c=0;
	for(i=1;i<=m;i++){
	if(m%i==0){
		printf("%d ",i);                  //this print is written to find what are the factors
		c++;
	}
}
	return c;
}
