#include<stdio.h>
int main(){
	int r,c,i,j,sum=0;
	scanf("%d %d",&r,&c);
	printf("enter %d elements\n",r*c);
	int mat[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum=sum+mat[i][j];
			}
		}
	}
	printf("sum of the trace %d",sum);
	return 0;
}
