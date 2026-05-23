class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        dist[0][0]=0;
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>
        >pq;
        pq.push({0,{0,0}});
        while(!pq.empty()){        
            auto it = pq.top();
            int dista = it.first;
            int r = it.second.first;
            int c = it.second.second;
            pq.pop();
            if(r==n-1&&c==m-1) return dista;
            if(dista>dist[r][c]) continue;
            if(r-1>=0){
                    int effort = max(dista,abs(heights[r-1][c]-heights[r][c]));
                    if(effort<dist[r-1][c]){
                    dist[r-1][c] = effort;
                    pq.push({effort,{r-1,c}});
                    }
                }
                if(c-1>=0){
                    int effort = max(dista,abs(heights[r][c-1]-heights[r][c]));
                    if(effort<dist[r][c-1]){
                    dist[r][c-1] = effort;
                    pq.push({effort,{r,c-1}});
                    }
                }
                if(r+1<n){
                    int effort = max(dista,abs(heights[r+1][c]-heights[r][c]));
                    if(effort<dist[r+1][c]){
                    dist[r+1][c] = effort;
                    pq.push({effort,{r+1,c}});
                    }
                }
                if(c+1<m){
                    int effort = max(dista,abs(heights[r][c+1]-heights[r][c]));
                    if(effort<dist[r][c+1]){
                    dist[r][c+1] = effort;
                    pq.push({effort,{r,c+1}});
                    }
                }
            }
        return 0;
    }
};