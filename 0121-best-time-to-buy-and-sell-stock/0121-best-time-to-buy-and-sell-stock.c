int maxProfit(int* prices, int pricesSize) {
    int profit=0;
    int var=prices[0];
    for(int i=1;i<=pricesSize-1;i++){
        if(prices[i]-var>profit){
            profit=prices[i]-var;
        }
        if(var>prices[i]){
            var=prices[i];
        }
    }
    return profit;
}