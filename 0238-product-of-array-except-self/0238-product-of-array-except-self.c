/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

    // Initialize 2 arrays
    int * leftMultTable = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++){
        leftMultTable[i] = 1;
    }
    int * rightMultTable = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++){
        rightMultTable[i] = 1;
    }

    int leftMult = 1;
    for (int i = 1; i < numsSize; i++){
        leftMultTable[i] = leftMultTable[i-1] * nums[i-1];
    }

    for (int i = numsSize - 2; i >= 0; i--){
        rightMultTable[i] = rightMultTable[i+1] * nums[i+1];
    }

    int * results = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++){
        results[i] = leftMultTable[i] * rightMultTable[i];
    }

    *returnSize = numsSize; // Set return size
    return results;
}