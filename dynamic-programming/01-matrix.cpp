class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> dist(n, vector<int>(m, -1));
        queue<pair<int,int>> q;

        // initialize
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 0){
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        // BFS
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // up
            if(r-1 >= 0 && dist[r-1][c] == -1){
                dist[r-1][c] = dist[r][c] + 1;
                q.push({r-1, c});
            }

            // down
            if(r+1 < n && dist[r+1][c] == -1){
                dist[r+1][c] = dist[r][c] + 1;
                q.push({r+1, c});
            }

            // left (FIXED)
            if(c-1 >= 0 && dist[r][c-1] == -1){
                dist[r][c-1] = dist[r][c] + 1;
                q.push({r, c-1});
            }

            // right (FIXED)
            if(c+1 < m && dist[r][c+1] == -1){
                dist[r][c+1] = dist[r][c] + 1;
                q.push({r, c+1});
            }
        }

        return dist;
    }
};