#include<stdio.h>
void displaymatrix(int rows,int cols,int matrix[rows][cols]);
void transpose(int rows,int cols,int matrix[rows][cols]);
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int a[rows][cols];
	printf("no of elements are %d\n",rows*cols);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("given matrix is :\n");
	displaymatrix(rows,cols,a);
	transpose(rows,cols,a);
	return 0;
}
void displaymatrix(int rows,int cols,int matrix[rows][cols]){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
void transpose(int rows,int cols,int matrix[rows][cols]){
	int i,j;
	int T[cols][rows];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			T[j][i]=matrix[i][j];
		}
	}
	printf("the transpose function :\n");
	displaymatrix(cols,rows,T);
}
