class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>>adj(n);
        queue<int>q;
        vector<int>indegree(n,0);
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
        int processed_notes = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            processed_notes++;
            for(int neighbor:adj[node]){
                indegree[neighbor]--;
                if(indegree[neighbor]==0){
                    q.push(neighbor);
                }
            }
        }
    if(processed_notes==numCourses) return true;
    return false;
    }
};