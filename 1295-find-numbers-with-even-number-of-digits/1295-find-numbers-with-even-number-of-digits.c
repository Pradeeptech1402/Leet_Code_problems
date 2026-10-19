int findNumbers(int* nums, int numsSize) {
    int even_count=0;
    for(int i=0;i<numsSize;i++){
        int count=0;
        int num=nums[i];
        while(num!=0){
            count++;
            num /= 10;
        }
        if(count%2==0){
            even_count++;
        }
    }
    return even_count;
}