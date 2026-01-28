// User function Template for C++
class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int rows=mat.size();
        int cols=mat[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==x){
                    return true;
                }
            }
        }
        return false;
    }
};