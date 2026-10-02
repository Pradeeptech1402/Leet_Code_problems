bool isPalindrome(int x) {
    int x_cp=x;
    unsigned int reversed=0;
    while(x>0){
        int digit = x%10;
        reversed=(reversed*10)+digit;
        x=x/10;
    }
    if(x_cp==reversed){
        return true;
    }else{
        return false;
    }
}