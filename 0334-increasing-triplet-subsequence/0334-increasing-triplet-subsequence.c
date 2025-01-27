bool increasingTriplet(int* nums, int numsSize) {
    int firstNum = INT_MAX;
    int secondNum = INT_MAX;

    for (int i = 0; i < numsSize; i++){
        if (nums[i] <= firstNum){
            firstNum = nums[i];
        } else if (nums[i] <= secondNum){
            secondNum = nums[i];
        } else {
            return true;
        }
    }

    return false;
}