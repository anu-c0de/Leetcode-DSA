class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //Step 1 - phle  Transpose karege 
        for(int i = 0; i<=n-1; i++){
            for(int j = i+1; j<=n-1; j++){
                // Swapping i,j and j,i
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        // Step - 1; Reverse each row --. the we get our answer.   
        for(int k = 0; k<=n-1; k++){
            int i = 0; 
            int j = n-1; // Isko piche se chala rehe hai. samjhe 
            while(i<=j){ // Swapping k,i and k,j
                int temp = matrix[k][i];
                matrix[k][i] = matrix[k][j];
                matrix[k][j] = temp;
                i++;
                j--;
            }
        }
        return;
    }
};