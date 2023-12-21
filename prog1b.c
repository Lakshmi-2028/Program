#include <stdio.h>

int main() {
    int x, y, z;
    
    printf("Enter three distinct values for x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);
    
    if ((x < y && y < z) || (z < y && y < x)) {
        printf("2 (y is the middle value)\n");
    } else if ((y < x && x < z) || (z < x && x < y)) {
        printf("1 (x is the middle value)\n");
    } else {
        printf("3 (z is the middle value)\n");
    }
    
    return 0;
}
