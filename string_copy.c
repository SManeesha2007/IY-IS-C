#include<stdio.h>
int main(){
	char A[10];
	char B[10];
	int i;
	printf("enter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++){
		B[i]=A[i];
	}
	B[i]='\0';
	printf("The given string : %s\n",A);
	printf("The copied sring : %s",B);
	return 0;
}
