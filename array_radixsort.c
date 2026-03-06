#include<stdio.h>
int get_max(int arr[],int n) {
	int m=arr[0],i;
	for(i=1;i<n;i++) {
		if(arr[i]>m) {
			m=arr[i];
		}
	}
	return m;	
}

void print(int arr[],int n){
	int i;
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void radix_sort(int arr[],int n) {
	int m=get_max(arr,n);
	int i,j,e=1;
	int buckets[10][n];
	while(m/e>0) {
		int i;
		int count[10]={0};
		for(i=0;i<n;i++) {
			int pos=(arr[i]/e)%10;
			buckets[pos][count[pos]]=arr[i];
			count[pos]++;
		}
		int c=0;
		for(i=0;i<10;i++) {
			for(j=0;j<count[i];j++) {
				arr[c]=buckets[i][j];
				c++;
			}
		}
		e *= 10;
	}
}

int main() {
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("before sorting\n");
	print(arr,n);
	radix_sort(arr,n);
	printf("\nafter sorting\n");
	print(arr,n);
}
