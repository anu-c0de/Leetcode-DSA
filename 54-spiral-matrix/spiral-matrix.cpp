class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int Te = n*m;     // Te ---> Total no. of element 
        int count = 0; 
        // Spiral 
        int minr = 0, minc = 0; 
        int maxr = m-1, maxc = n-1; 

        vector<int>v;
        while(minr<=maxr && minc<=maxc){

            // Right Move 
            for(int j =minc; j<=maxc && count<Te; j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            // if(minr> mixr || minc>maxc) break;     We can use this for not extra printing element but for now we are using count 
            // Down Movement
            for(int i = minr; i<=maxr && count<Te; i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;

            // Left move 
            // if(minr> mixr || minc>maxc) break;
            for(int j = maxc; j>= minc && count<Te; j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;


        // UP move 
        // if(minr> mixr || minc>maxc) break;
            for(int i = maxr; i>= minr && count<Te; i--){
                v.push_back(matrix[i][minc]);
                count++;
        }
        minc++;
        }
        return v;
                
    }
};