#include <stdio.h>

void swapByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swapByValue(a, b);

    printf("After swapping (Call By Value): a = %d, b = %d\n", a, b);

    return 0;
}