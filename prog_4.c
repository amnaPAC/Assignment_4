#include <stdio.h>

int main() {
    float temperatures[30];
    float total_temp = 0, average_temp;
    float max_temp, min_temp;
    int max_day = 0, min_day = 0;
    
    for (int i = 0; i < 30; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        
        total_temp += temperatures[i];
        
        if (i == 0 || temperatures[i] > max_temp) {
            max_temp = temperatures[i];
            max_day = i + 1;
        }
        if (i == 0 || temperatures[i] < min_temp) {
            min_temp = temperatures[i];
            min_day = i + 1;
        }
    }
    
    average_temp = total_temp / 30;
    
    printf("\nAverage monthly temperature: %.2f°C\n", average_temp);
    printf("Highest temperature recorded: %.2f°C on day %d\n", max_temp, max_day);
    printf("Lowest temperature recorded: %.2f°C on day %d\n", min_temp, min_day);
    
    printf("\nDays with above-average temperatures:\n");
    for (int i = 0; i < 30; i++) {
        if (temperatures[i] > average_temp) {
            printf("Day %d: %.2f°C", i + 1, temperatures[i]);
            if (temperatures[i] > 35) {
                printf(" (Hot Day!)");
            }
            printf("\n");
        }
    }
    
    return 0;
}
