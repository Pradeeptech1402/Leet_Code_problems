char* toLowerCase(char* s) {
   unsigned int size=0;
    while(s[size] !='\0'){
        size++;
    }
    for(int i=0;i<size;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    return s;
}