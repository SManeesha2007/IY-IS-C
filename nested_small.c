#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%c ",(char)(96+j));               //here small letters ascii value start with 97
		}
		printf("\n");
	}
	return 0;
}
