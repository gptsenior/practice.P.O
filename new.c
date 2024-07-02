#include <stdio.h>

int main() {
    double t1, t2, t3;
    
    printf("Enter three values: ");
    if (scanf("%lf %lf %lf", &t1, &t2, &t3) != 3) {
        printf("Error reading input\n");
        return 1;
    }

    // Output the input values for debugging
    printf("t1: %lf, t2: %lf, t3: %lf\n", t1, t2, t3);

    if (t1 <= 0 || t2 <= 0 || t3 <= 0) {
        printf("All times must be positive numbers\n");
        return 1;
    }

    double productivity = 1/t1 + 1/t2 + 1/t3;
    double totalTime = 1 / productivity;

    // Output the computed productivity and total time for debugging
    printf("Productivity: %lf\n", productivity);
    printf("Total time: %.2lf\n", totalTime);

    return 0;
}
