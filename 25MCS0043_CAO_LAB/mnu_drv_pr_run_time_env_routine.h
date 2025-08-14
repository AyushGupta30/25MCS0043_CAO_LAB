
#include <stdio.h>
#include "run_time_environment_routines.h"

int mainf() {
    int choice = 0, flag = 0;

    do {
        printf("\n=== OpenMP Runtime Menu ===\n");
        printf("1. Set Number of Threads\n");
        printf("2. Get Number of Threads (Parallel)\n");
        printf("3. Get Max Threads\n");
        printf("4. Get Thread Number (Parallel)\n");
        printf("5. Get Number of Processors\n");
        printf("6. Check if In Parallel Region\n");
        printf("7. Set Dynamic Threading\n");
        printf("8. Get Dynamic Threading Status\n");
        printf("9. Set Nested Parallelism\n");
        printf("10. Get Nested Parallelism Status\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            fn_rter_omp_set_num_threads();
            break;
        case 2:
            fn_rter_omp_get_num_threads();
            break;
        case 3:
            fn_rter_omp_get_max_threads();
            break;
        case 4:
            fn_rter_omp_get_thread_num();
            break;
        case 5:
            fn_rter_omp_get_num_procs();
            break;
        case 6:
            fn_rter_omp_in_parallel();
            break;
        case 7:
            printf("Enter flag (0 or 1): ");
            scanf_s("%d", &flag);
            fn_rter_omp_set_dynamic(flag);
            break;
        case 8:
            fn_rter_omp_get_dynamic();
            break;
        case 9:
            printf("Enter flag (0 or 1): ");
            scanf_s("%d", &flag);
            set_nested_example(flag);
            break;
        case 10:
            get_nested_example();
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}

