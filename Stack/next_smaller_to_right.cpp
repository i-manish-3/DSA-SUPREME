#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
    
    vector<int> v;
    stack<int> s;
    
    for(int i = n - 1; i >= 0 ; i--)
    {
        if(s.size() == 0)
        {
            v.push_back(-1);
        }
        else if(s.size() > 0 && s.top() < a[i])
        {
            v.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() >= a[i])
        {
            while(s.size() > 0 && s.top() >= a[i])
            {
                s.pop();
            }
            if(s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    reverse(v.begin(), v.end());
    return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends