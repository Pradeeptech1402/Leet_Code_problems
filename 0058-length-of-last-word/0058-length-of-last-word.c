int lengthOfLastWord(char* s) {
    unsigned int i=0;
    char* ptr;
    unsigned int length=0;
    while(s[i]!='\0')i++;
    ptr=s+(i-1);
    while(*ptr==' ')ptr--;
    while(ptr-s>=0&&*ptr!=' '&&ptr>=s){
        length++;
        ptr--;
    }
    return length;
}