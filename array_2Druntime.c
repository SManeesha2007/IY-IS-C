#include<stdio.h>
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	printf("enter the %d elements\n",rows*cols);
	int m[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("the matrix is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
