#include <stdio.h>


void merge(int *arr, int low, int mid, int high){
	
	int left_arr_size = mid - low + 1 ;
	int right_arr_size = high - mid ; 
	int arr_left[left_arr_size + 1];
	int arr_right[right_arr_size + 1]; 
	arr_left[left_arr_size]=0x7fff;
	arr_right[right_arr_size]=0x7fff;
	int left = 0 ;
	int right = 0 ;
		
	for(int i = 0; i < left_arr_size; i++){
		arr_left[i] = arr[low + i];
	}
	
	for(int i = 0; i < right_arr_size; i++){
		arr_right[i] = arr[mid + i + 1];
	}
	
	for(int i = low; i <= high; i++)
		if(arr_left[left] < arr_right[right])
			arr[i] = arr_left[left++];
		else
			arr[i] = arr_right[right++];
}

void merge_sort(int *arr, int low, int high){
	if(low < high){
		int mid =  ( low + high ) / 2;
		//printf("low : %d \t mid : %d \t high : %d \n", low, mid, high);
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
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
	printf("Before Sorting : \n");
	print_array(arr, size);
	merge_sort(arr, 0, size - 1 );
	printf("After Sorting : \n");
	print_array(arr, size);
	
	printf("Ended!!!\n");
	return 0;
}
