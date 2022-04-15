// ex - 1 2 3 
//      4 5 6   
//      7 8 9

//      7 4 1
//      8 5 2
//      9 6 3



class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int r = matrix.size();
        int c = matrix[0].size();
        for(int i =0; i<r;++i){
            for(int j=0; j<i;++j){
                swap(matrix[i][j],matrix[j][i]);    // first transpose the matrix
            }
        }
        for(int i=0;i<r;++i){
            reverse(matrix[i].begin(),matrix[i].end()); // then reverse the row
        }
    }
};