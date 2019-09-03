#include <stdio.h>

void bubble_sort(int *arr, int size){

	for(int j = 0;  j < size - 1; j++){
		int counter = 0 ;
		for(int i = 0;  i < size - 1 - j; i++){
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
	bubble_sort(arr, size);
	printf("After Sorting : \n");
	print_array(arr, size);
	
	printf("Ended!!!\n");
	return 0;
}