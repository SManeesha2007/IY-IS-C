#include<stdio.h>
int main(){
	int i,j;
	int m[3][3]={0};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
