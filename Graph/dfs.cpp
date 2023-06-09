#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    private:
        
        void dfs(int src, vector<int> adj[], vector<int> &ans, vector<int> & visited)
        {
            ans.push_back(src);
            visited[src] = 1;
            for(auto it: adj[src])
            {
                if(!visited[it])
                {
                    visited[it] = 1;
                    dfs(it, adj, ans, visited);
                }        
            }
        }
    public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> visited(V, 0);
        
        for(int i = 0; i < V; i++)
        {
            if(!visited[i])
            {
                dfs(i, adj, ans, visited);
            }
        }
        return ans;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}