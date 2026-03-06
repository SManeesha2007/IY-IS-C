#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int digits=(int)log10(n)+1;            //log can be calculated  as (given no-1)
	printf("%d",digits);                  // ex:log100to the base 10 here 100 is 3 digits and ans is 2 so 3-1=2
	return 0; 
}
