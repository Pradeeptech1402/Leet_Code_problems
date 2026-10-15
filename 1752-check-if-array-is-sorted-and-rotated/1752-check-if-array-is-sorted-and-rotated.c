bool check(int* nums, int numsSize) {
    int flip=0;
    for(int i=0;i<numsSize-1;i++){
        if(flip==0){
            if(!(nums[i]<=nums[i+1])){
                flip++;
            }
        }else if(flip==1){
            if(!(nums[i]<=nums[i+1])){
                return false;
            }
        }
    }
    if(flip==1 && !(nums[numsSize-1]<=nums[0])){
        return false;
    }
    return true;
}