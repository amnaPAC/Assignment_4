#include <stdio.h>

int main() {
    int steps, total_steps = 0, max_steps = 0, min_steps = 0;
    int max_hour = 0, min_hour = 0;
    float average_steps;

    for (int i = 0; i < 24; i++) {
        printf("Enter steps in hour %d => ", i + 1);
        scanf("%d", &steps);
        
        total_steps += steps;

        if (i == 0 || steps > max_steps) {
            max_steps = steps;
            max_hour = i + 1;
        }
        if (i == 0 || steps < min_steps) {
            min_steps = steps;
            min_hour = i + 1;
        }

        if (steps == 0) {
            printf("Warning: No steps recorded at hour %d (Inactivity detected).\n", i + 1);
        }
    }

    average_steps = (float)total_steps / 24;

    printf("\nTotal steps in the day: %d\n", total_steps);
    printf("Average steps per hour: %.2f\n", average_steps);
    printf("Hour with maximum steps: %d (%d steps)\n", max_hour, max_steps);
    printf("Hour with minimum steps: %d (%d steps)\n", min_hour, min_steps);

    return 0;
}
