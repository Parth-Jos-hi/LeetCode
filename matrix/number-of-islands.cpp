class Solution {
public:
    void bfs_island(vector<vector<char>>& grid,vector<vector<bool>>&visited,int i,int j){
        queue<pair<int,int>>q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({i,j});
        visited[i][j]=true;
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            //up
            if(r-1>=0&&grid[r-1][c]=='1'&&!visited[r-1][c]){
                visited[r-1][c]= true;
                q.push({r-1,c});
            }
            // down
            if(r+1<n&&grid[r+1][c]=='1'&&!visited[r+1][c]){
                visited[r+1][c]= true;
                q.push({r+1,c});
            }
            
            //left
            if(c-1>=0&&grid[r][c-1]=='1'&&!visited[r][c-1]){
                visited[r][c-1]= true;
                q.push({r,c-1});
            }
            if(c+1<m&&grid[r][c+1]=='1'&&!visited[r][c+1]){
                visited[r][c+1]= true;
                q.push({r,c+1});
            }
        }}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int i = 0 ;i<n;i++){
            for(int j =0;j<m;j++){
                if(visited[i][j]== false && grid[i][j]=='1'){
                    count++;
                    bfs_island(grid,visited,i,j);
                }
            }
        }
        return count;
    }
};    