char findTheDifference(char* s, char* t) {
    int sumofT=0,sumofS=0;
    int len=0;
    while(t[len]!='\0'){
        sumofT += t[len];
        len++;
    }
    len=0;
    while(s[len]!='\0'){
        sumofS += s[len];
        len++;
    }
    char diffrence=sumofT-sumofS;
    return diffrence;
}