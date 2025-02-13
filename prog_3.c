#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PASSWORD_LENGTH 100

int is_strong_password(char password[]) {
    int length = strlen(password);
    int has_upper = 0, has_lower = 0, has_digit = 0;

    if (length < 8) {
        printf(" Your password is too short! Must be at least 8 characters long.\n");
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) has_upper = 1;
        if (islower(password[i])) has_lower = 1;
        if (isdigit(password[i])) has_digit = 1;
    }

    if (!has_upper) {
        printf(" Your password must contain at least one uppercase letter.\n");
    }
    if (!has_lower) {
        printf(" Your password must contain at least one lowercase letter.\n");
    }
    if (!has_digit) {
        printf(" Your password must contain at least one numeric digit.\n");
    }

    return has_upper && has_lower && has_digit;
}

int main() {
    char password[MAX_PASSWORD_LENGTH];

    while (1) {
        printf("\nEnter a strong password: ");
        scanf("%s", password);

        if (is_strong_password(password)) {
            printf(" Password is strong!\n");
            break;
        }
        printf(" Try again with a stronger password.\n");
    }

    return 0;
}
