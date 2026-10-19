/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize*sizeof(int));
    if(ans==NULL)return NULL;
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[nums[i]];
    }
    *returnSize=numsSize;
    return ans;
}