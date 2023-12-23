#include <stdio.h>
#include <string.h>

const char *phoneMap[] = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void generateCombinations(char *digits, int index, char *combination, char result[][5], int *count) {
    if (digits[index] == '\0') {
        combination[index] = '\0';
        strcpy(result[*count], combination);
        (*count)++;
        return;
    }

    int digit = digits[index] - '0';
    const char *letters = phoneMap[digit];

    for (int i = 0; letters[i] != '\0'; i++) {
        combination[index] = letters[i];
        generateCombinations(digits, index + 1, combination, result, count);
    }
}

void letterCombinations(char* digits, char result[][5], int* returnSize) {
    int length = strlen(digits);
    if (length == 0) {
        *returnSize = 0;
        return;
    }

    *returnSize = 0;

    char combination[5]; 
    generateCombinations(digits, 0, combination, result, returnSize);
}

int main() {
    char digits[20]; 
    printf("Enter the digits: ");
    scanf("%s", digits);

    char result[100][5]; 
    int returnSize;

    letterCombinations(digits, result, &returnSize);

    printf("Output:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}
