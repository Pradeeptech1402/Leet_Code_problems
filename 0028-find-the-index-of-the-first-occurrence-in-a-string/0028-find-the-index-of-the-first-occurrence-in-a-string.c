#include<string.h>
int strStr(char* haystack, char* needle) {
     char* ptr = strstr(haystack,needle);
    if(ptr == NULL){
        return -1;
    }else{
        return ptr-haystack;
    }

}