int smallestEvenMultiple(int n) {
    int smallest_multiple=2;
    while(1){
        if(smallest_multiple%2==0 && smallest_multiple%n==0){
            return smallest_multiple;
        }
        smallest_multiple++;
    }
}