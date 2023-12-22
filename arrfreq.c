#include <stdio.h>

void printDuplicateFreq(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int count = 1;
        while ((i + 1) < n && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            printf("%d->%d, ", arr[i], count);
        }
        i++;
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the size of the array: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    int Array[N];

    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &Array[i]) != 1) {
            printf("Invalid input for element %d!\n", i + 1);
            return 1;
        }
    }

    printf("\nSample Output:\n");
    printDuplicateFreq(Array, N);

    return 0;
}
