typedef struct {
   int*prefixSum;
   int size; 
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* obj=(NumArray*)malloc(sizeof(NumArray));
    obj->size=numsSize;
    obj->prefixSum=(int*)malloc(numsSize*sizeof(int));
    if(numsSize>0){
        obj->prefixSum[0]=nums[0];
        for(int i=1;i<numsSize;i++){
            obj->prefixSum[i]=obj->prefixSum[i-1]+nums[i];
        }
    }
    return obj;
}

int numArraySumRange(NumArray* obj, int left, int right) {
    if(left==0){
        return obj->prefixSum[right];
    }    
    return obj->prefixSum[right]-obj->prefixSum[left-1];
}

void numArrayFree(NumArray* obj) {
    free(obj->prefixSum);
    free(obj);
}

/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);
 * int param_1 = numArraySumRange(obj, left, right);
 
 * numArrayFree(obj);
*/