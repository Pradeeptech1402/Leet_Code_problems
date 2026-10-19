/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    int* ans = malloc((2*n)*sizeof(int));
    if(ans==NULL)return NULL;
    for(int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    *returnSize=2*n;
    return ans;
}