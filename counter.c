#include <stdio.h>
#include <time.h>

int main() {
    // Start timer
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Counting loop
    for (long i = 1; i <= 1000000000; i++) {
        // Intentionally left blank
    }

    // End timer
    clock_gettime(CLOCK_MONOTONIC, &end);

    // Calculate time taken
    double time_taken = end.tv_sec - start.tv_sec;
    time_taken += (end.tv_nsec - start.tv_nsec) / 1000000000.0;

    printf("Counted to 1 billion in %f seconds.\n", time_taken);

    return 0;
}
