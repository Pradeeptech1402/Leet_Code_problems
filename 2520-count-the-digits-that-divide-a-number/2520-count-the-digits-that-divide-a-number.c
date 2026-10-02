int countDigits(int num) {
    int input = num;
    int count=0;
    while(input>0){
        int digit = input%10;
        if(num%digit==0){
            count++;
        }
        input /= 10;
    }
    return count;
}