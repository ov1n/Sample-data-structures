//Time complexity of bubble sort is moodified to O(n) for average case from O(n^2) by terminating the loop if no swaps happen 
#include<stdio.h>

void swap(int *x,int *y){
	
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubble_sort(int array[],int n){
	
	int i,j,k;
	for(i=0;i<n-1;i++){
		int swaps=0;		//to optimize , if no swaps are happening within inner loop,array is already sorted
		for(j=n-1;j>i;j--){
			if(array[j]<array[j-1]){
				swap(&array[j],&array[j-1]);
				swaps++;
			}
		}
		if(!swaps){
			break;
		}
	}
}
int main(){
	int a[]={5,4,2,1,6,0,9,34,54,7}; //Edit as necessary
	int n=sizeof(a)/sizeof(a[0]);
	
	bubble_sort(a,n);
	
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
