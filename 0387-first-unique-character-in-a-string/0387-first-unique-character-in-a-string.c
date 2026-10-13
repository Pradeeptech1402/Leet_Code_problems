int firstUniqChar(char* s) {
    unsigned int len=0;
    while(s[len])len++;
    for(unsigned i=0;i<len;i++){
        int uniq=1;
        for(unsigned int j=0;j<len;j++){
            if(i!=j&&s[i]==s[j]){
                uniq=0;
                break;
            }
        }
        if(uniq){
            return i;
        }
    }
    return -1;
}