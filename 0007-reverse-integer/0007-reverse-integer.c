#include<limits.h>
int reverse(int x){
    int original_value=x;
    long long reversed=0;
    while(original_value!=0){
        int digit=original_value%10;
        reversed = (reversed*10)+digit;
        original_value /= 10;
    }
        if(reversed > INT_MAX|| reversed < INT_MIN){
            return 0;
        }
    return reversed;    
}