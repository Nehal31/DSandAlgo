#include <stdio.h>


int partition(int *arr, int low, int high){
	
	int pivot = arr[high];
	int i = low - 1;
	int j = low - 1;
	
	while( i < high ){
		if( arr[++i] < pivot ){
			int temp = arr[++j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	int temp = arr[++j];
	arr[j] = arr[i];
	arr[i] = temp;
	
	return j;
}

void quick_sort(int *arr, int low, int high){
	if(low < high){
		
		int part = partition(arr, low, high);
		//printf("low : %d \t mid : %d \t high : %d \n", low, part, high);
		
		quick_sort(arr, low, part - 1);
		quick_sort(arr, part + 1, high);
	}
}

void print_array(int *arr, int size){
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(){
	printf("Starting...\n");
	int arr[] = {10, 8, 19, 2, 18, 7, 58, 77};
	
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Befor Sorting : \n");
	print_array(arr, size);
	quick_sort(arr, 0, size - 1 );
	printf("After Sorting : \n");
	print_array(arr, size);
	
	printf("Ended!!!\n");
	return 0;
}