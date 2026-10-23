char* addStrings(char* num1, char* num2) {
    int len1=0,len2=0;
    while(num1[len1])len1++;
    while(num2[len2])len2++;
    char* arr = malloc((len1+len2)+2);
    int index1=len1-1, index2=len2-1;
    int carry=0;
    int i=0;
    while(index1>=0||index2>=0){
        char char_num1;
        char char_num2;
        index1>=0?(char_num1=num1[index1]):(char_num1='0');
        index2>=0?(char_num2=num2[index2]):(char_num2='0');
        index1--;
        index2--;

        arr[i] = ((char_num1-'0')+(char_num2-'0')+carry)%10+'0';
        carry = ((char_num1-'0')+(char_num2-'0')+carry)/10;
        i++;
    }
    if(carry){
        arr[i]=carry+'0';
        i++;
    }
    for(int j=0;j<i/2;j++){
        char temp = arr[j];
        arr[j]=arr[i-j-1];
        arr[i-j-1]=temp;
    }
    arr[i]='\0';
    return arr;
}