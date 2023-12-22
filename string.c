#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter the input string: ");
    scanf("%s", input);

    int i = 0;
    while (input[i] != '\0') {
        if (isalpha(input[i])) { 
            char letter = input[i];
            i++;

            int count = 0;
            while (isdigit(input[i])) { 
                count = count * 10 + (input[i] - '0');
                i++;
            }

            for (int j = 0; j < count; j++) {
                printf("%c", letter);
            }
        } else {
            printf("Invalid input format.");
            return 1;
        }
    }

    printf("\n");
    return 0;
}
