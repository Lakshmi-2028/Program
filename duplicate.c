#include <stdio.h>

void findDuplicates(int a[], int N) {
    int i, j;
    int found = 0;

    printf("Duplicate elements in the array: ");

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int a[N];
    printf("Enter elements : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    findDuplicates(a, N);

    return 0;
}
