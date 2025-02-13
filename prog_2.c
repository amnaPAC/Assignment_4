#include <stdio.h>

int main() {
    float daily_spending, total_weekly_spending = 0, daily_budget_limit;
    float average_daily_spending;

    
    printf("Enter your daily budget limit: ");
    scanf("%f", &daily_budget_limit);

    for (int day = 1; day <= 7; day++) {
        printf("Enter spending for day %d: ", day);
        scanf("%f", &daily_spending);

        if (daily_spending > daily_budget_limit) {
            printf(" Overspent on day %d! Over budget by %.2f.\n", day, daily_spending - daily_budget_limit);
        }

        total_weekly_spending += daily_spending;
    }

    average_daily_spending = total_weekly_spending / 7.0;

    printf("\n========== Weekly Spending Summary ==========\n");
    printf("Total weekly spending: $%.2f\n", total_weekly_spending);
    printf("Average daily spending: $%.2f\n", average_daily_spending);
    printf("Daily budget limit: $%.2f\n", daily_budget_limit);

    return 0;
}
