#include <stdio.h>
#define PI 3.14159

int main() {
    char shape;
    float size;

    printf("Enter shape (S for Square, C for Circle): ");
    scanf("%c", &shape);

    printf("Enter size: ");
    scanf("%f", &size);

    if (shape == 'S' || shape == 's') {
        float area_square = size * size;
        printf("Area of Square = %.2f\n", area_square);
    } else if (shape == 'C' || shape == 'c') {
        float area_circle = PI * size * size;
        printf("Area of Circle = %.2f\n", area_circle);
    } else {
        printf("Invalid shape input!\n");
    }

    return 0;
}