char* reverseWords(char* s) {
    int i=0;
    while(s[i]!='\0'){
        int start=i;
        while(s[i]!=' '&&s[i]!='\0'){
            i++;
        }
        int end=i-1;
        while(start<end){
            char temp;
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        if(s[i]==' '){i++;}
    }
    return s;
}