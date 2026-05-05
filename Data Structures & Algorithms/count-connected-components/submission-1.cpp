class Solution {
public:
    void dfs(int i,vector<vector<int>>&adj,vector<int>&vis)
    {
        if (i < 0 || i >= vis.size()) return;
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
            dfs(it,adj,vis);
            }
        }
        return ;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        if (n == 0) return 0;
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        int cnt=0;
        for(auto it:edges)
        {
            adj[it[1]].push_back(it[0]);
            adj[it[0]].push_back(it[1]);

        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
              dfs(i,adj,vis);
              cnt++;
            }
        }
        return cnt;
    }
};
