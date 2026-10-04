bool isPalindrome(char* s) {
    unsigned int size=0,index=0;;
    while(s[size]!='\0'){
        size++;
    }
    for(int i=0;i<size;i++){
        if((s[i]>='A'&&s[i]<='Z')||s[i]>='a' && s[i]<='z'||s[i]>='0' && s[i]<='9'){
            if(s[i]>='A'&&s[i]<='Z'){
                s[index++]=s[i]+32;
            }else{
                s[index++]=s[i];
            }
        }
    }
        for(int j=0;j<index/2;j++){
            if(s[j]!=s[index-j-1]){
                return false;
            }
        }
    return true;
}
