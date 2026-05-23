class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        int ones_at_end = 0;
        int other_ones = 0;
         for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 ||i==n-1||j==0||j==m-1)&&grid[i][j]==1){
                    grid[i][j]= 2;
                    q.push({i,j});
                    ones_at_end++;
                }
                else if((i!=0 ||i!=n-1||j!=0||j!=m-1)&&grid[i][j]==1){
                    other_ones++;
                }
            }
         }
            while(!q.empty()){
                int r = q.front().first;
                int c=  q.front().second;
                q.pop();
            if(r-1>=0&&grid[r-1][c]==1){
                grid[r-1][c] = 2;
                q.push({r-1,c});
            }
            if(r+1<n&&grid[r+1][c]==1){
                grid[r+1][c] = 2;
                q.push({r+1,c});
            }
            if(c-1>=0&&grid[r][c-1]==1){
                grid[r][c-1] = 2;
                q.push({r,c-1});
            }
            if(c+1<m&&grid[r][c+1]==1){
                grid[r][c+1] = 2;
                q.push({r,c+1});
            }
            }
        int total_ones =0 ;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    total_ones++;
                }
            }
        }
            return total_ones;
    }
};