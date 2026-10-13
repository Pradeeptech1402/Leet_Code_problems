char* reverseVowels(char* s) {
    int len=0;
    char* first = s;
    while(s[len])len++;
    char* last = s+(len-1);
    while(first<last){
        while((first<last)&&!(*first=='A'||*first=='E'||*first=='I'||*first=='O'||*first=='U'||
            *first=='a'||*first=='e'||*first=='i'||*first=='o'||*first=='u'))first++;
        while((first<last)&&!(*last=='A'||*last=='E'||*last=='I'||*last=='O'||*last=='U'||
            *last=='a'||*last=='e'||*last=='i'||*last=='o'||*last=='u'))last--;
        int temp=*first;
        *first=*last;
        *last=temp;
        first++;
        last--;
    }
    return s;
}