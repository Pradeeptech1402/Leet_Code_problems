bool isPowerOfTwo(int n) {
    if(n < 0)return false;
    unsigned int power=1;
    while(power < n ){
        power *= 2;
    }
    return power==n;
}