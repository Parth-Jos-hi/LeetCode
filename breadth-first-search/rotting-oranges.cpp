class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int fresh =0;
        int minutes =0;
        queue<pair<int,int>>q;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    fresh++;
                }
                else if (grid[i][j]==2){
                    q.push({i,j});
                } 
            }
        }
        while(!q.empty()&& fresh>0){
            int a = q.size();
            for(int i =0;i<a;i++){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            //up
            if(r-1>=0&&grid[r-1][c]==1){
                grid[r-1][c]= 2;
                q.push({r-1,c});
                fresh--;
            }
            //down
            if(r+1<n&&grid[r+1][c]==1){
                grid[r+1][c]= 2;
                q.push({r+1,c});
                fresh--;
            }
            //left
            if(c-1>=0&&grid[r][c-1]==1){
                grid[r][c-1]= 2;
                q.push({r,c-1});
                fresh--;
            }
            if(c+1<m&&grid[r][c+1]==1){
                grid[r][c+1]= 2;
                q.push({r,c+1});
                fresh--;
            }
           
        }
         minutes++;
        }
        if(fresh>0){
            return -1;
        }
        return minutes;
    }
};