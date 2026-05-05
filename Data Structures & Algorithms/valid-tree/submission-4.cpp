class Solution {
public:
    bool dfs(int node,int parent,vector<int>&vis,vector<vector<int>>& adj)
    {
        if(vis[node]!=0)
        {
            return false;
        }
        vis[node]++;
        for(auto it :adj[node])
        {
            if(it==parent)
            continue;

            if(!dfs(it,node,vis,adj))
            {
                return false;
            }
        }
        return true;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
       vector<vector<int>>adj(n);
       vector<int>vis(n,0);
       if(edges.size()!=n-1)return false;
       for(auto edge :edges)
       {
        adj[edge[1]].push_back(edge[0]);
        adj[edge[0]].push_back(edge[1]);
       }
       if(!dfs(0,-1,vis,adj))return false;

       return vis.size()==n;

    }
};
