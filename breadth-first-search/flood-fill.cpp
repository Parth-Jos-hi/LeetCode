class Solution {
public:
    void bfs_floodhill(vector<vector<int>>& image, int sr, int sc, int color, int origin_color){
        queue<pair<int,int>>q;
        int n = image.size();
        int m = image[0].size();
        q.push({sr,sc});
        image[sr][sc] = color;
        while(!q.empty()){
            int r= q.front().first;
            int c = q.front().second;
            q.pop();
            //up
            if(r-1>=0&&image[r-1][c]== origin_color){
                image[r-1][c]= color;
                 q.push({r-1,c});
            }
            //downn
            if(r+1<n&&image[r+1][c]== origin_color){
                image[r+1][c]= color;
                 q.push({r+1,c});
               
            }
            //left
            if(c-1>=0&&image[r][c-1]== origin_color){
                image[r][c-1]= color;
                 q.push({r,c-1});
               
            }
            if(c+1<m&&image[r][c+1]== origin_color){
                image[r][c+1]= color;
                 q.push({r,c+1});
                
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int origin_color = image[sr][sc];
        if(origin_color==color){
            return image;
        }
        bfs_floodhill(image,sr,sc,color,origin_color);
        return image;
    }
};