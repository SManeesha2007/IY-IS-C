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
	printf("the lower matrix is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(i>=j){
			   printf("%d ",m[i][j]);
		    }
		    else{
		    	printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
