/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *result=(int*)malloc(sizeof(int)*numsSize);
    int *leftSum=(int*)malloc(sizeof(int)*numsSize);
    int *rightSum=(int*)malloc(sizeof(int)*numsSize);

    *returnSize=numsSize;

    leftSum[0]=0;
    rightSum[numsSize-1]=0;
    
    for(int i=1;i<numsSize;i++){
        leftSum[i]=nums[i-1]+leftSum[i-1];
    }
    for(int i=numsSize-2;i>=0;i--){
        rightSum[i]=nums[i+1]+rightSum[i+1];
    }
    for(int i=0;i<numsSize;i++){
        result[i]=abs(leftSum[i]-rightSum[i]);
    }
    return result;
}