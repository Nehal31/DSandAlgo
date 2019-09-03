
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int *arr, long long size){
	clock_t start, end;
	start = clock();
	for(long long j = 1;  j < size; j++){
		long long i = j;
		long long val = arr[i];
		while( arr[i-1] > val && i > 0){
			arr[i] = arr[i - 1];
			i--;
		}
		arr[i] = val;
		//printf("%d \n", arr[i]);
	}	
	end = clock() - start;
	double time_taken = ((double)end)/CLOCKS_PER_SEC;
	printf("Execution time : %f \n", time_taken );
}

void selection_sort(int *arr, long long size){

	for(long long j = 0;  j < size - 1; j++){
		int min = arr[j];
		long long loc = j;
		for(long long i = j;  i < size; i++){
			if( arr[i] < min ){
				min = arr[i];
				loc = i;
			}
		}
		if( loc != j){
			arr[loc] = arr[j];
			arr[j] = min;
		}
		else
			break;
	}
}

void bubble_sort(int *arr, long long size){

	for(long long j = 0;  j < size - 1; j++){
		long long counter = 0 ;
		for(long long i = 0;  i < size - 1 - j; i++){
			if( arr[i + 1] < arr[i] ){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				counter = 1;
			}
		}
		if( counter == 0)
			break;
	}
}

void print_array(int *arr, long long size){
	for(long long i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


void data_creation(int *arr, long long data_size){
	//srand(time(0));
	for(long long i = 0; i < data_size; i++){
		arr[i] = rand() % 1000;
	}
}

//void *fun_ptr (int*, int );

void setup(){
	printf("");
	
	
}

int main(){
	int *arr;
	long long arr_size = 1000000;
	
	arr = (int *)malloc(sizeof(int) * arr_size);
	data_creation(arr, arr_size);
	//print_array(arr,arr_size);
	insertion_sort(arr, arr_size);
	//print_array(arr,arr_size);
	return 0;
}
