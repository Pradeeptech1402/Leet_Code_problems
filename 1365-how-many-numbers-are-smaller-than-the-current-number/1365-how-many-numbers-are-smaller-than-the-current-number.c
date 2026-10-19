/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* arr = malloc(numsSize*sizeof(int));
    if(arr==NULL)return NULL;

    for(int i=0;i<numsSize;i++){
        int count=0;
        for(int j=0;j<numsSize;j++){
            if(i!=j && nums[j]<nums[i]){
                count++;
            }
        }
        arr[i]=count;
    }

    *returnSize=numsSize;
    return arr;
}