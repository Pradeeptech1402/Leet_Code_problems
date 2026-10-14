int missingNumber(int* nums, int numsSize) {
    int n_sum=numsSize;
    int arr_sum=0;
    for(int i=0;i<numsSize;i++){
        n_sum+=i;
        arr_sum+=nums[i];
    }
    return n_sum-arr_sum;
}