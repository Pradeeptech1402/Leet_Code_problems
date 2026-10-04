bool rotateString(char* s, char* goal) {
    int size=0;
    while(s[size] != '\0'){
        size++;
    }
    for(int i=0;i<size;i++){
        int equal=1;
        char element=s[0];
        for(int j=1;j<size;j++){
            s[j-1]=s[j];
        }
        s[size-1]=element;
        for(int j=0;j<size;j++){
            if(s[j] != goal[j]){
                equal=0;
                break;
            }
        }
        if(equal){
            return true;
        }
    }
    return false;
}