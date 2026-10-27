/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* ans = malloc((n+1)*sizeof(int));
    for(int i=0;i<=n;i++){
        int bit=i;
        int count=0;
        while(bit!=0){
            bit = bit&(bit-1);
            count++;
        }
        ans[i]=count;
    }
    *returnSize=n+1;
    return ans;
}