#include<stdio.h>
void selection_sort(int A[],int size){
	int counter = 0;
	int i,min,j;
	for(i = 0 ;i<size-1;i++){
		min = i;
		counter++;
		for(j = i ; j<size ; j++){
			if(A[j]<A[min])
				
				min = j;
		}
	}
	int temp = A[i];
	A[i] = A[min];
	A[min] = A[i];
	printf("Found in %d times -------> Selection Sort\n",counter);
}

void insertion_sort(int A[],int size){
	int counter = 0;
	int i,key,j;
	for (j=1; j<size; j++){
		counter++;
		key = A[j];
		i = j-1;
		while (i>=0 && A[i]>key){
		
	
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = key;
	} 
	printf("Found in %d times -------> Insertýon Sort\n",counter);
}

void bubble_sort(int A[],int size){
	int i,j,counter = 0;
	for(i=0;i<size;i++){
		counter++;
		for(j=0;j<size;j++){
			if(A[i]<A[j]){
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	printf("Found in %d times -------> Bubble Sort\n",counter);
}

int main(){
	int dizi[] = {3,2,1,4,9,8,5};
	selection_sort(dizi,7);
	bubble_sort(dizi,7);
	insertion_sort(dizi,7);
	
	
	
	return 0;
}
