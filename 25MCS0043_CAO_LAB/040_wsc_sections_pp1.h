#include"stdio.h"
#include"omp.h"
#include "040_calculator_functions_pp1.h"
void fn_wsc_sections_pp1_srl()
{
	int a = 5, b = 3, sum, difference;
	double start_time, end_time;
	start_time = omp_get_wtime();


	sum= fn_calculator_add(a, b);
	printf("Addition: %d + %d =%d by thread id \n", a, b, sum);

	difference = fn_calculator_subtract(a, b);
	printf("substraction: %d - %d =%d \n", a, b, difference , omp_get_thread_num());

	end_time = omp
}



