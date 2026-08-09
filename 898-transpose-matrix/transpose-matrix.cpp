class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();   // Rows 
        int n = matrix[0].size();  // Coloumn
        // int t[n][m];
        vector<vector<int>> t(n,vector<int>(m));
        for(int i = 0; i<= n-1; i++){
            for(int j = 0; j<= m-1; j++){
                t[i][j] = matrix[j][i];
            }
        }
        return t;
    }
};