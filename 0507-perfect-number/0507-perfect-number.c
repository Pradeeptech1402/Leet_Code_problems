bool checkPerfectNumber(int num) {
    int sum_of_devisers=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum_of_devisers += i;
        }
    }
    return sum_of_devisers==num;
}