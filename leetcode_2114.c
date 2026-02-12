int mostWordsFound(char** sentences, int sentencesSize) {
    int maxwords=0;
    for(int i=0;i<sentencesSize;i++){
        int count=1;
        int j=0;
        while(sentences[i][j]!='\0'){
            if(sentences[i][j]==' '){
                count++;
            }
            j++;
        }
        if(count>maxwords){
            maxwords=count;
        }
    }
    return maxwords;
}