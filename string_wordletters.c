#include<stdio.h>
int main(){
	char name[20];
	int i,lettercount=0;
    gets(name);
	for(i=0;name[i]!='\0';i++){
		if(name[i] != ' ') 
		{
			lettercount++;
		}	
		else 
		{
			printf("%d ",lettercount);
			lettercount = 0;
		}
	}
	printf("%d", lettercount);
	return 0;
}
