#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n%3==0){
			printf("0\n");
		}
		else{
			int res=3-(n%3);
			printf("%d\n",res);
		}
	}
	return 0;
}
