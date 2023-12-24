#include <stdio.h>

void printUnion(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;

    printf("Union of the arrays: ");

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < m) {
        printf("%d ", arr2[j]);
        j++;
    }

    printf("\n");
}

int main() {
    int n, m;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter elements for the first sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Enter elements for the second sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    printUnion(arr1, n, arr2, m);

    return 0;
}
