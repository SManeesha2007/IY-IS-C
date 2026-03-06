#include<stdio.h>
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int m[rows][cols];
	printf("enter %d elements\n",rows*cols);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&m[i][j]);
		}
	}
	int sum=0;
	printf("the matrix is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",m[i][j]);
			sum=sum+m[i][j];
		}
		printf("\n");
	}
	printf("sum of the each element is %d",sum);
	return 0;
}
