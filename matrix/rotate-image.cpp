class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>>arr;
        for (int i = 0; i < r; i++) {
        vector<int> row; 
        for (int j = 0; j < c; j++) {
            row.push_back(matrix[j][i]);
        }
        arr.push_back(row); 
    }
        for(auto &row:arr){
            reverse(row.begin(),row.end());
        }
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                matrix[i][j] = arr[i][j];
            }
        }

    }
};