class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& visited, vector<int>& path_vis) {
        visited[node] = 1;
        path_vis[node] = 1;
        for(int neighbor : graph[node]) {
            if(path_vis[neighbor] == 1) {
                return true;
            }
            if(visited[neighbor] == 0) {
                if(dfs(neighbor, graph, visited, path_vis)) {
                    return true;
                }
            }
        }

        path_vis[node] = 0;  
        return false;       
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<int> visited(n, 0);
        vector<int> path_vis(n, 0);
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(!dfs(i, graph, visited, path_vis)) {
                ans.push_back(i);  
            }
        }

        return ans;
    }
};