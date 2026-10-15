int findMaxConsecutiveOnes(int* nums, int numsSize) {
    if(numsSize==1){
        if(nums[0]==0)return 0;
        else return 1;
    }
    unsigned int max_count=0;
    unsigned int count=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            count++;
            if(max_count<count){
                max_count=count;
            }
        }else{
            count=0;
        }
    }
    return max_count;

}