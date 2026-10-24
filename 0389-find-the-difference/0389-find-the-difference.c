char findTheDifference(char* s, char* t) {
    char res=0;
    for(int i=0;t[i]!='\0';i++){
         res=res^s[i];
    }
    for(int i=0;t[i]!='\0';i++){
         res= res^t[i];
    }
    return res;
}