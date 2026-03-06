#include<stdio.h>
int matrixsum(int[][],int[][],int[][],int,int);
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int A[rows][cols];
	int B[rows][cols];
	int C[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",A[i][j]);
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",B[i][j]);
		}
	}
	int res=matrixsum(C,rows,cols);
	printf("%d",res);
	return 0;
}
int matrixsum(int A[rows][cols],int B[rows][cols],int C[rows][cols],rows,cols){
        int i;
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
				C[i][j]=A[i][j]+B[i][j];
			}
			printf("\n");
		}
		return C[i][j];	
}










