char* reverseWords(char* s) {
void reverse(char* first,char* last){
    while(first<last){
        char temp=*first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}
    int size=0;
    while(s[size++]);
    size--;
    char* ptr=s;
    for(int i=0;i<=size;i++){
        if(s[i]==' '|| s[i]=='\0'){
            reverse(ptr,s+i-1);
            ptr=s+i+1;
        }
    }
    return s;
}