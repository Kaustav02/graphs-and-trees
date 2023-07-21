// only the function
// GFG
class solution:{
    public:

    vector<int>dfs(vector<int> adj[],int node , vector<int> &ans , vector<int>&vis){
        
        vis[node]=1;
        ans.push_back(node);
        
        for(auto i : adj[node]){
            if(!vis[i]){
                dfs(adj,i,ans,vis);
            }
        }
        
        return ans;
        
    }



     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<int>vis(V,0);
        int node =0;
        dfs(adj,0,ans,vis);
        return ans;
        
     }

};

    