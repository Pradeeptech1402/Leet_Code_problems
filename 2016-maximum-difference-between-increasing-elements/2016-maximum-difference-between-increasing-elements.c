int maximumDifference(int* nums, int numsSize) {
   int minVal=nums[0];
   int maxdiff=-1;
   for(int i=1;i<numsSize;i++){
        if(minVal>nums[i]){
          minVal=nums[i];
        }else if(minVal<nums[i]){
            int current_count= nums[i]-minVal;
            if(current_count>maxdiff){
            maxdiff=current_count;
            }
        }
    }
    return maxdiff;
}