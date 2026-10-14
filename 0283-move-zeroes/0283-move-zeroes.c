void moveZeroes(int* nums, int numsSize) {
    int size=numsSize;
    int new_index=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[new_index]=nums[i];
            new_index++;
        }else{size--;
        }
    }
    for(int i=size;i<numsSize;i++){
        nums[i]=0;
    }
}