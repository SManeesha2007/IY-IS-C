#include<stdio.h>
int main(){
	int std_marks[3][5]={{7,8,9,5,6},{8,9,9,8,10},{9,5,3,2,6}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("M[%d][%d]=%d ",i,j,std_marks[i][j]);
		}
		printf("\n");
	}
	return 0;
}
