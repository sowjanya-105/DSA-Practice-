class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        i00 nt n= matrix.size();
        //transpose of given matrix
       for(int i=0;i<n;i++){
           for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);   
           }
       }
        //reverse of transpose matric
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
