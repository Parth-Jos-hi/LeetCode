class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>>adj(n);
        queue<int>q;
        vector<int>indegree(n,0);
        vector<int>ans;
        for(int i = 0; i < prerequisites.size(); i++) {
        int a = prerequisites[i][0];
        int b = prerequisites[i][1];
        adj[b].push_back(a);
        indegree[a]++;
}
        for(int i =0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);   
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int neighbor:adj[node]){
                indegree[neighbor]--;
                if(indegree[neighbor]==0){
                    q.push(neighbor);
                }
            }
        }
        vector<int>anss;
        if(ans.size()==numCourses) return ans;
        return anss;
        
    }
};