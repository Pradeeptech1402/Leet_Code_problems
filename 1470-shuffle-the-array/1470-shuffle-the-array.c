

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* ans = malloc(numsSize*sizeof(int));
    if(ans==NULL){return NULL;};
    for(int i=0;i<n;i++){
        ans[i*2]=nums[i];
        ans[i*2+1]=nums[i+n];
    }

    *returnSize=numsSize;
    return ans;
}