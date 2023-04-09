#include<bits/stdc++.h> 
using namespace std;

int solve(vector<int> &arr, int target)
{
    int n = arr.size();

    if(target == 0)
    {
        return 0;
    }
    if(target < 0)
    {
        return INT_MAX;
    }

    // solve a case

    int mini = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int ans = solve(arr, target - arr[i]);
        if(ans != INT_MAX)
        {
            mini = min(mini, ans+1);
        }
    }
    return mini;
}


int main(){
    vector<int> arr = {1,4,6,8};
    cout<<solve(arr, 11);
    return 0;
}