#include <stdio.h>

void selection_sort(int *arr, int size){

	for(int j = 0;  j < size - 1; j++){
		int min = arr[j];
		int loc = j;
		for(int i = j;  i < size; i++){
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
	selection_sort(arr, size);
	printf("After Sorting : \n");
	print_array(arr, size);
	
	printf("Ended!!!\n");
	return 0;
}