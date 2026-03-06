#include<stdio.h>
int main(){
	char A[20],B[20],C[40];
	gets(A);
	gets(B);
	int i,j=0;
	for(i=0;A[i]!='\0';i++){
			C[j]=A[i];
			j++;
		}
		C[j]=' ';
		j++;
	for(i=0;B[i]!=0;i++){
		C[j]=B[i];
		j++;
	}
	C[j]='\0';
	printf("the first name : %s\n",A);
	printf("the last name : %s\n",B);
	printf("the full name : %s",C);
	return 0;
}
