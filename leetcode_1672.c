int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxwealth=0;
    for(int i=0;i<accountsSize;i++){
        int currentwealth=0;
        for(int j=0;j<accountsColSize[i];j++){
            currentwealth+=accounts[i][j];
        }
        if(currentwealth>maxwealth){
            maxwealth=currentwealth;
        }
    }
    return maxwealth;
}