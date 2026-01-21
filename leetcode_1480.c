
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for result array
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    // Size of returned array
    *returnSize = numsSize;
    
    // First element
    result[0] = nums[0];
    
    // Calculate running sum
    for(int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }
    
    return result;
}

