#include<stdio.h>
int main(){
	int marks[6]={1,2,3,4,5,6};
	int i,sum=0;
	for(i=0;i<=5;i++){
		sum=sum+marks[i]; 
	}
	printf("%d",sum);
	return 0;
}
