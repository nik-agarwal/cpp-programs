//    1 4 7 11 15
//    2 5 8 12 19
//    3 6 9 16 22
//    10 13 14 17 24
//    18 21 23 26 30

// search for 17 results false
// search for 16 results true

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowind = 0;
        int colind = col-1;
        while(rowind<row && colind>=0){
            int element = matrix[rowind][colind];
            if(element == target)
                return 1;
            if(element<target)
                rowind++;
            else
                colind--;
        }
        return 0;
    }
};