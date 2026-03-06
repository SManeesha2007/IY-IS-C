#include<stdio.h>
int main(){
	int size,i,j;
	scanf("%d",&size);
	int mat[size][size];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		scanf("%d",&mat[i][j]);
	}
}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j>i){
				printf("0");
			}
			else{
				printf("%d",mat[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
