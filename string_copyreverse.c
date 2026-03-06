#include<stdio.h>
int main(){
	char A[10];
	char B[10];
	int i,j=0,len;
	printf("enter the string\n");
	gets(A);
	len=strlen(A);
	printf("the length of %s is %d\n",A,len);
	for(i=len-1;i>=0;i--){
		B[j]=A[i];
		j++;
	}
	B[j]='\0';
	printf("the reverse of %s is %s",A,B);
	return 0;
}
