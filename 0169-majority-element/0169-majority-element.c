int majorityElement(int* nums, int numsSize) {
    int count=0;
    int element=nums[0];
    for(int i=0;i<numsSize;i++){
        if(count==0){
            element=nums[i];
        }
        if(element==nums[i]){
            count++;
        }else{
            count--;
        }
    }
    return element;
}