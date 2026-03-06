#include<stdio.h>
#include<string.h>
void bubble(char str[]){
	int i,j;
	int n=strlen(str);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(str[j]>str[j+1]){
				char temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
int main(){
	int i;
	char str[100]="iloveclanguage";
	char str1[100]="bubblesortiseasy";
	printf("before sorting:%s\n",str);
	bubble(str);
	printf("after sorting:%s\n",str);
	printf("before sorting:%s\n",str1);
	bubble(str1);
	printf("after sorting:%s\n",str1);
	return 0;
}
