#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: [-2,1,-3,4,-1,2,1,-5,4]\nOutput: %d\n", maxSubArray(nums1, size1));

    int nums2[] = {1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: [1]\nOutput: %d\n", maxSubArray(nums2, size2));

    int nums3[] = {5, 4, -1, 7, 8};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Input: [5,4,-1,7,8]\nOutput: %d\n", maxSubArray(nums3, size3));

    return 0;
}
