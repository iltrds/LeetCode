/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 0;
    int * result = malloc(sizeof(int)*2);
    
    for (int i = 0; i < numsSize; i++){
        for (int y = 0; y < numsSize; y++){
            
            if (nums[i] + nums[y] == target && i != y){
                result[0] = i;
                result[1] = y;
                
                *returnSize = 2;
                
                
            }
            
        }
    }
    
    
    return result;
}