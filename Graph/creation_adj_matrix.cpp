#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    // TC = O(N)
    // SC = O(N^2)

    int adj[n + 1][m + 1]; // for i based indexing 

    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u][v] = 1;
        adj[v][u] = 1; // this case will not present in directed graph
    }
    return 0;
}