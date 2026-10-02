int sumOfMultiples(int n) {
    int sum_of_integers=0;
    for(int i=1;i<=n;i++){
        if(i%3==0||i%5==0||i%7==0){
            sum_of_integers += i;
        }
    }
    return sum_of_integers;
}