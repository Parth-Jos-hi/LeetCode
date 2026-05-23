class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]==1||grid[n-1][n-1]==1){
            return -1;
        }
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        dist[0][0]=1;
        while(!q.empty()){            
            int r = q.front().first;   
            int c = q.front().second;  
            q.pop();
            if(r-1>=0&&grid[r-1][c]!=1&&dist[r-1][c]>dist[r][c]+1){
                dist[r-1][c]=dist[r][c]+1;
                q.push({r-1,c});
            }
            if(c-1>=0&&grid[r][c-1]!=1&&dist[r][c-1]>dist[r][c]+1){
                dist[r][c-1]=dist[r][c]+1;
                q.push({r,c-1});
            }
            if(r+1<=n-1&&grid[r+1][c]!=1&&dist[r+1][c]>dist[r][c]+1){
                dist[r+1][c]=dist[r][c]+1;
                q.push({r+1,c});
            }
            if(c+1<=n-1&&grid[r][c+1]!=1&&dist[r][c+1]>dist[r][c]+1){
                dist[r][c+1]=dist[r][c]+1;
                q.push({r,c+1});
            }
            if((c-1>=0&&r-1>=0)&&grid[r-1][c-1]!=1&&dist[r-1][c-1]>dist[r][c]+1){
                dist[r-1][c-1]=dist[r][c]+1;
                q.push({r-1,c-1});
            }
            if((c-1>=0&&r+1<=n-1)&&grid[r+1][c-1]!=1&&dist[r+1][c-1]>dist[r][c]+1){
                dist[r+1][c-1]=dist[r][c]+1;
                q.push({r+1,c-1});
            }
            if((r-1>=0&&c+1<=n-1)&&grid[r-1][c+1]!=1&&dist[r-1][c+1]>dist[r][c]+1){
                dist[r-1][c+1]=dist[r][c]+1;
                q.push({r-1,c+1});
            }
            if((c+1<=n-1&&r+1<=n-1)&&grid[r+1][c+1]!=1&&dist[r+1][c+1]>dist[r][c]+1){
                dist[r+1][c+1]=dist[r][c]+1;
                q.push({r+1,c+1});
            }
        }
        if(dist[n-1][n-1]==INT_MAX) return -1;
        return dist[n-1][n-1];
    }
};

