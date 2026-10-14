bool isAnagram(char* s, char* t) {
   int alphacounts[26]={0}; 
   int sizes=0,sizet=0;
   while(s[sizes])sizes++;
   while(t[sizet])sizet++;
   if(sizes!=sizet){
    return false;
   }
   for(int i=0;i<sizes;i++){
    alphacounts[s[i]-'a']++;
    alphacounts[t[i]-'a']--;
   }
   for(int i=0;i<26;i++){
    if(alphacounts[i]!=0){
        return false;
    }
   }
    return true;
}