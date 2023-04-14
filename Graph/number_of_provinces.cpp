#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    private:
    
    void dfs(int node, vector<int> adjLs[], vector<int> &visited)
    {
        visited[node] = 1;
        
        for(auto it: adjLs[node])
        {
            if(visited[it] == 0)
            {
                dfs(it, adjLs, visited);
            }
        }
    }
    
    public:
    int numProvinces(vector<vector<int>> adj, int V) {
        
        // conversion of adj matrix to adj list
        vector<int> adjLs[V];
        
        for(int i = 0; i < adj.size(); ++i)
        {
            for(int j = 0; j < adj[i].size(); ++j)
            {
                if(adj[i][j] == 1 && i != j)
                {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        
        
        // dfs call for every node;
        
        int provincesCnt = 0;
        vector<int> visited(V,0);

        for(int i = 0; i < V; i++)
        {
            if(visited[i] == 0)
            {
                provincesCnt++;
                dfs(i, adjLs, visited);
            }
        }
        return provincesCnt;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}