#include<stdio.h>
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int m[rows][cols];
	printf("the %d elements\n",rows*cols);
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
			if(i+j==rows-1){
			sum=sum+m[i][j];
		    }
		}
		printf("\n");
	}
	printf("the sum of anti diagonals %d",sum);
	return 0;
}
