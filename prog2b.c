#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrongPassword(char *password) {
    int length = strlen(password);
    bool hasLowerCase = false, hasUpperCase = false, hasDigit = false, hasSpecialChar = false;

    if (length < 8) return false;

    for (int i = 0; i < length; i++) {
        if ('a' <= password[i] && password[i] <= 'z') hasLowerCase = true;
        else if ('A' <= password[i] && password[i] <= 'Z') hasUpperCase = true;
        else if ('0' <= password[i] && password[i] <= '9') hasDigit = true;
        else if (strchr("!@#$%^&*()-+", password[i]) != NULL) hasSpecialChar = true;
    }

    return (hasLowerCase && hasUpperCase && hasDigit && hasSpecialChar);
}

int main() {
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) printf("The password is strong.\n");
    else printf("The password is not strong.\n");

    return 0;
}
