class Solution {
public:
    bool find(vector<vector<int>>& adjv, vector<int>& visited, int source, int destination) {
        queue<int> q;
        q.push(source);
        visited[source] = 1;  

        while(!q.empty()){
            int node = q.front();
            q.pop();

            if(node == destination){
                return true;
            }

            for(int neighbor : adjv[node]){
                if(visited[neighbor] == -1){
                    visited[neighbor] = 1;
                    q.push(neighbor);   
                }
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& adj, int source, int destination) {
        if(source == destination){
            return true;
        }

        // build graph
        vector<vector<int>> adjv(n);

        for(int i = 0; i < adj.size(); i++){
            int u = adj[i][0];
            int v = adj[i][1];
            adjv[u].push_back(v);
            adjv[v].push_back(u);
        }

        vector<int> visited(n, -1);

        return find(adjv, visited, source, destination);
    }
};