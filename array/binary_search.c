#include <stdio.h>

int searchStart(int* nums, int numsSize, int target) {
    if (numsSize == 0) return -1;
    int low = 0, high = numsSize - 1, mid;

    while (low < high) {
        mid = low + (high - low) / 2;
        if (nums[mid] >= target)
            high = mid;
        else
            low = mid + 1;
    }
    return nums[low] == target ? low : -1;
}

int searchEnd(int* nums, int numsSize, int target) {
    if (numsSize == 0) return -1;
    int low = 0, high = numsSize - 1, mid;

    while (low < high) {
        mid = low + (high - low) / 2;
        mid = low + (high - mid);
        if (nums[mid] <= target)
            low = mid;
        else
            high = mid - 1;
    }
    return nums[low] == target ? low : -1;
}

int main(void) {
    /*int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;*/
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 6;

    printf("%d\n", searchStart(nums, 6, target));
    printf("%d\n", searchEnd(nums, 6, target));
}
