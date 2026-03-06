#include<stdio.h>
int main(){
	char name[20]; 
	int wordcount=0,i;
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		wordcount++;
	}
	printf("total number of words: %d\n",wordcount+1);
    return 0;
}
