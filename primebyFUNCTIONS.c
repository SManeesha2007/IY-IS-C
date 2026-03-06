#include<stdio.h>
int factor(int);                                                       
int main(){
	int n;
	scanf("%d",&n);
	int res=factor(n);
	printf("\n%d\n",res);
	if(res==2){
		printf("the number %d is prime number",n); 
	}
	else{
		printf("it is not prime number");
	}
	return 0; 
}
int factor(int m){
	int i,c=0;
	for(i=1;i<=m;i++){
		if(m%i==0){
			printf("%d ",i);
			c++;
	}
}
	return c;
}

