#include <stdio.h>

void insertion_sort(int *arr, int size){
	
	for(int j = 1;  j < size; j++){
		int i = j;
		int val = arr[i];
		while( arr[i-1] > val && i > 0){
			arr[i] = arr[i - 1];
			i--;
		}
		arr[i] = val;
		printf("%d \n", arr[i]);
	}	
}

void print_array(int *arr, int size){
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(){
	printf("Starting...\n");
	int arr[] = {10, 8, 19, 32, 18, 7, 5, 77};
	
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Befor Sorting : \n");
	print_array(arr, size);
	insertion_sort(arr, size);
	printf("After Sorting : \n");
	print_array(arr, size);
	
	printf("Ended!!!\n");
	return 0;
}