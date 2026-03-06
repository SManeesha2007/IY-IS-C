#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	add(x,y);
	int res=sub(x,y);
	return 0;
	
}
void add(int m,int n){
  	printf("%d\n",m+n);
}
int sub(int m,int n){
  	printf("%d\n",m-n);	
	return m-n;
}
