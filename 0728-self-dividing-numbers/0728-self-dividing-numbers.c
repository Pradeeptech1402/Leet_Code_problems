/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* arr = malloc((right-left+1)*sizeof(int));
    if(arr==NULL)return NULL;
    int j=0;
    for(int i=left;i<=right;i++){
        int num=i;
        int divisible=1;
        while(num !=0){
            int digit=num%10;
            if((digit==0)||(i%digit!=0)){
                divisible = 0;
                break;
            }
            num /= 10;
        }
        if(divisible){
            arr[j]=i;
            j++;
        }
    }
    *returnSize = j;
    return arr;
}