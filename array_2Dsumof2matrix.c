#include<stdio.h>
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int A[rows][cols];
	int B[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&A[i][j]);
		}
	}
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&B[i][j]);
		}
	}
	int C[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		  C[i][j]=A[i][j]+B[i][j];
			printf("%d ",C[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
