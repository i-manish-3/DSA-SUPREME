#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    // TC = O(N)
    // SC = O(2E) where E = no of edges


    vector<int> adj[n+1];  // a list of array of size n+1

    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u); // this is not required for directed graph 

        // for directed graph TC for adj list is O(E)  bcause it is not consuming 2 edges

    }
    return 0;
}