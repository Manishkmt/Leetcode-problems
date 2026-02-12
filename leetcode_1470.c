/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
int * result = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    //apporach 1
    // int i = 0;
    // int j = n;
    // int k = 0;.
    // while(i<n && j<numsSize){
    //     result[k++]=nums[i++];
    //     result[k++]=nums[j++];
    // }

    //apporach 2
    for(int i = 0,j=n,k=0;i<n;i++,j++,k+=2){
        result[k]=nums[i],result[k+1]=nums[j];
    }

    return result;
}