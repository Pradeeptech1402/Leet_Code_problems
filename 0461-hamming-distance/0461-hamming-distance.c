int hammingDistance(int x, int y) {
    int diff = x^y;
    int distance=0;
    while(diff!=0){
        diff = diff&(diff-1);
        distance++;
    }
    return distance;
}