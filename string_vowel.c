#include<stdio.h>
int main(){
	char item[10];
	int vcount=0,ccount=0,i;
	printf("enter the item name");
	scanf("%s",item);
	for(i=0;item[i]!=0;i++){
		if(item[i]=='a'||item[i]=='e'||item[i]=='i'||item[i]=='o'||item[i]=='u'){
			vcount++;
		}
		else{
			ccount++;
		}
	}
	printf("the number of vowels are %d\n",vcount);
	printf("the number of consonant are %d",ccount);
	return 0;
}
