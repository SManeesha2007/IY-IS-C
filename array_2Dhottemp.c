#include<stdio.h>
void displaymatrix(int rows,int cols,int [rows][cols]);
int hottest(int rows,int cols,int [rows][cols]);
int main(){
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	displaymatrix(rows,cols,arr);
	int res=hottest(rows,cols,arr);
	printf("the hottest temperature %d",res); 
	return 0;
}
void displaymatrix(int rows,int cols,int arr[rows][cols]){
	int i,j;
    arr[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int hottest(int rows,int cols,int arr[rows][cols]){
	int i,j,max=arr[0][0];
	arr[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	return max;
}
