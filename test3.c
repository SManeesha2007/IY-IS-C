#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0&&y>0){
		printf("it's in the first quadrant.");
	}
	else if(x<0&&y>0){
		printf("it's in the second quadrant.");
	}
	else if(x>0&&y<0){
		printf("it's in the third quadrant.");
	}
	else if(x>0&&y<0){
		printf("it's in the fourth quadrant.");
	}
	else if(x==0&&y==0){
		printf("the point is at the origin.");
	}
	return 0;
} 
   
   
