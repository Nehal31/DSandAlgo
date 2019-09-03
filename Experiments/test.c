#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	clock_t start, end;
	start = clock();
	time_t t = time(NULL);
	struct tm *tm = localtime(&t);

	printf("%.of",9.8);
	/*
	printf("%s",asctime(tm));
	printf("time %d \n", t);
	srand(t);
	printf("random num %d \n", rd);
	printf("sizeof int %d \n", sizeof(int));
	printf("sizeof long %d \n", sizeof(long));
	printf("sizeof long int %d \n", sizeof(long int));
	printf("sizeof long long %d \n", sizeof(long long));
	printf("sizeof long long int %d \n", sizeof(long long int));
	printf("Execution time : %d \n", time(NULL) - t); 
	end = clock() - start;

	double time_taken = ((double)end)/CLOCKS_PER_SEC;
	printf("Execution time : %f \n", time_taken ); 
		*/
	return 0;
}