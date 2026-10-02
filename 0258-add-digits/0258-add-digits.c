int addDigits(int num) {
    int sum=0;
    do{
    sum=0;
        while(num != 0){
        int digit = num%10;
        sum += digit;
        num /= 10 ;
    }
    num=sum;
    }while(num >=10);
    return sum;
}