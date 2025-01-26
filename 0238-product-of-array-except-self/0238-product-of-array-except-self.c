/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

    // Initialize 2 arrays
    int * leftMultTable = malloc(sizeof(int) * numsSize);
    leftMultTable[0] = 1;
    for (int i = 1; i < numsSize; i++){
        leftMultTable[i] = leftMultTable[i-1] * nums[i-1];
    }

    int * rightMultTable = malloc(sizeof(int) * numsSize);
    rightMultTable[numsSize-1] = 1;
    for (int i = numsSize - 2; i >= 0; i--){
        rightMultTable[i] = rightMultTable[i+1] * nums[i+1];
    }

    for (int i = 0; i < numsSize; i++){
        nums[i] = leftMultTable[i] * rightMultTable[i];
    }

    *returnSize = numsSize; // Set return size
    return nums;
}