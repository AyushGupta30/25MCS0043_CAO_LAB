#include <stdio.h>
#include <omp.h>

// 1. Set number of threads
void fn_rter_omp_set_num_threads() {
    omp_set_num_threads(8);
}

// 2. Get number of threads
void fn_rter_omp_get_num_threads() {

#pragma omp parallel


    printf("Number of threads: %d\n", omp_get_num_threads());
}

// 3. Get max threads
void fn_rter_omp_get_max_threads() {
    printf("Max threads: %d\n", omp_get_max_threads());
}

// 4. Get thread number
void fn_rter_omp_get_thread_num() {
#pragma omp parallel
    {
        printf("Thread ID: %d\n", omp_get_thread_num());
    }
}

// 5. Get number of processors
void fn_rter_omp_get_num_procs() {
    printf("Number of processors: %d\n", omp_get_num_procs());
}

// 6. Check if in parallel region
void fn_rter_omp_in_parallel() {
    printf("In parallel? %d\n", omp_in_parallel());
#pragma omp parallel
    {
#pragma omp single
        printf("In parallel (inside): %d\n", omp_in_parallel());
    }
}

// 7. Set dynamic threads
void fn_rter_omp_set_dynamic(int flag) {
    omp_set_dynamic(flag);
}

// 8. Get dynamic status
void fn_rter_omp_get_dynamic() {
    printf("Dynamic threads enabled? %d\n", omp_get_dynamic());
}

// 9. Get cancellation support
//void get_cancellation_example() {
//    printf("Cancellation enabled? %d\n", omp_get_cancellation());
//}

// 10. Set nested parallelism
void set_nested_example(int flag) {
    omp_set_nested(flag);
}

// 11. Get nested status
void get_nested_example() {
    printf("Nested parallelism: %d\n", omp_get_nested());
}

//// 12. Set schedule
//void set_schedule_example() {
//    omp_set_schedule(omp_set_schedule, 2);
//}

// 13. Get schedule
//void get_schedule_example() {
//    omp_sched_t kind;
//    int modifier;
//    omp_get_schedule(&kind, &modifier);
//    printf("Schedule kind: %d, modifier: %d\n", kind, modifier);
//}

// 14. Get thread limit
//void get_thread_limit_example() {
//    printf("Thread limit: %d\n", omp_get_thread_limit());
//}

//// 15. Set max active levels
//void set_max_active_levels_example(int levels) {
//    omp_set_max_active_levels(levels);
//}

//// 16. Get max active levels
//void get_max_active_levels_example() {
//    printf("Max active levels: %d\n", omp_get_max_active_levels());
//}

// 17. Get current nesting level
//void get_level_example() {
//#pragma omp parallel
//    {
//        printf("Level: %d\n", omp_get_level());
//    }
//}

// 18. Get ancestor thread number
//void get_ancestor_thread_num_example(int level) {
//#pragma omp parallel
//    {
//        printf("Ancestor thread num at level %d: %d\n", level, omp_get_ancestor_thread_num(level));
//    }
//}

// 19. Get team size at a level
//void get_team_size_example(int level) {
//#pragma omp parallel
//    {
//        printf("Team size at level %d: %d\n", level, omp_get_team_size(level));
//    }
//}

//// 20. Get active level
//void get_active_level_example() {
//#pragma omp parallel
//    {
//        printf("Active level: %d\n", omp_get_active_level());
//    }
//}

// 21. In final region
//void in_final_example() {
//#pragma omp parallel
//    {
//#pragma omp single
//        printf("In final: %d\n", omp_in_final());
//    }
//}
//
//// 22. Get proc bind
//void get_proc_bind_example() {
//    omp_proc_bind_t pb = omp_get_proc_bind();
//    printf("Proc bind type: %d\n", pb);
//}
//
//// 23. Set default device
//void set_default_device_example(int device) {
//    omp_set_default_device(device);
//}
//
//// 24. Get number of devices
//void get_num_devices_example() {
//    printf("Number of devices: %d\n", omp_get_num_devices());
//}
//
//// 25. Get default device
//void get_default_device_example() {
//    printf("Default device: %d\n", omp_get_default_device());
//}
//
//// 26. Get number of teams
//void get_num_teams_example() {
//#pragma omp target teams
//    {
//#pragma omp parallel
//        {
//#pragma omp single
//            printf("Number of teams: %d\n", omp_get_num_teams());
//        }
//    }
//}
//
//// 27. Get team number
////void get_team_num_example() {
////#pragma omp target teams
////    {
////#pragma omp parallel
////        {
////            printf("Team num: %d\n", omp_get_team_num());
////        }
////    }
////}
//#pragma once
