/* Algo 1 : Linear Search
 * Array
 * Link List
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* |`````````|``````````|         |`````````|``````````|
 * |   10    | 0x1008  -|-------->|   20    |  NULL	   |
 * |,,,,,,,,,|,,,,,,,,,,|         |,,,,,,,,,|,,,,,,,,,,|
 *     0x1000                         0x1008
*/
typedef struct node{
	int num;
	struct node *next;
}node;

int linear_search_arr(int *arr, int size, int search_key){
	int loc = -1;
	for(int i = 0; i < size; i++){
		if(arr[i] == search_key){
			loc = i;
			break;
		}	
	}
	return loc;
}

void test_linear_search_arr(){
	printf("test started\n");
	int arr[] = {10, 20, 15, 30, 19, 40, 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Test Case 1: ");
	int item = 30;
	assert(linear_search_arr(arr, size, item) == 3);
	printf("Pass\n");
	
	printf("Test Case 2: ");
	item = 50;
	assert(linear_search_arr(arr, size, item) == -1);
	printf("Pass\n");

}

int linear_search_ll(int *arr, int search_key);
void test_linear_search_ll(int *arr);

int main(){
	test_linear_search_arr();
	
	return 0;
}

