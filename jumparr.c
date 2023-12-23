#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; 
        }
        maxReach = (i + nums[i]) > maxReach ? (i + nums[i]) : maxReach;
        if (maxReach >= numsSize - 1) {
            return true; 
        }
    }
    return false;
}

int main() {
    int nums1[] = {2, 3, 1, 1, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: [2,3,1,1,4]\nOutput: %s\n", canJump(nums1, size1) ? "true" : "false");

    int nums2[] = {3, 2, 1, 0, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: [3,2,1,0,4]\nOutput: %s\n", canJump(nums2, size2) ? "true" : "false");

    return 0;
}
