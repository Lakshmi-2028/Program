#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    
    *returnSize = digitsSize + 1;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i < (*returnSize); i++) {
        result[i] = 0;
    }
    return result;
}

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int returnSize1;
    int* result1 = plusOne(arr1, size1, &returnSize1);

    printf("Input: [1,2,3]\nOutput: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d", result1[i]);
        if (i != returnSize1 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    int arr2[] = {9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int returnSize2;
    int* result2 = plusOne(arr2, size2, &returnSize2);

    printf("Input: [9]\nOutput: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d", result2[i]);
        if (i != returnSize2 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    free(result1);
    free(result2);

    return 0;
}
