#include <stdio.h>

void swapByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Before swapping - a = %d, b = %d\n", a, b);
    swapByReference(&a, &b);
    printf("After swapping by reference - a = %d, b = %d\n", a, b);
    return 0;
}
