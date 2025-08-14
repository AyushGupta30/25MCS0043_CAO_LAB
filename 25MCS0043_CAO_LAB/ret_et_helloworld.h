//ret - runtime environment routine
//et - execution time

#include"stdio.h"
#include"omp.h"

void fn_ret_et_helloworld_srl() {
	double start, end;

	start = omp_get_wtime();

	printf("Hello World Serial\n");

	end = omp_get_wtime();

	printf("Execution start time: %f ms \n", start);
	printf("Execution end time: %f ms \n", end);
	printf("Execution time of serial programm: %f ms \n", end - start);
}

void fn_ret_et_helloworld_prl() {
	double start2, end2;

	start2 = omp_get_wtime();

#pragma omp parallel
	printf("Hello World Parallel\n");

	end2 = omp_get_wtime();

	printf("Parallel execution start time: %f ms \n", start2);
	printf("Parallel execution end time: %f ms \n", end2);
	printf("Execution time of parallel program: %f ms \n", end2 - start2);
}