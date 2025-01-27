void moveZeroes(int* nums, int numsSize) {
    int orgNums[numsSize];

    int zeroCounter = 0;
    int index = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] != 0){
            orgNums[index] = nums[i];
            index++;
        } else {
            zeroCounter++;
        }
    }
    for(int i = 0; i < numsSize; i++){
        if (i < numsSize - zeroCounter){
            nums[i] = orgNums[i];
        } else {
            nums[i] = 0;
        }
    }
}