#include<stdio.h>
 int factor(int);
 int main(){
 	int i,x,y;
 	scanf("%d%d",&x,&y);
 	for(i=x;i<=y;i++){
 		int res=factor(i);
 		if(res==2){
 		printf("%d \n",i);
	}	
	 }
	 return 0;
 }
 int factor(int m){
 	int i,c=0;
 	for(i=1;i<=m;i++){
 		if(m%i==0){
 			c++;
		 }
	 }
	 return c;
 }
