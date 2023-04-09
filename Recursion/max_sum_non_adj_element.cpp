#include<bits/stdc++.h> 
using namespace std;

void solve(vector<int> &arr, int i, int &maxi, int sum)
{
    // base case
    if(i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    
    // include
    solve(arr, i+2, maxi, sum+arr[i]);

    //exclude
    solve(arr, i+1, maxi, sum);
}


int main(){
    vector<int> arr{1,2,3,4,5};
    int maxi = INT_MIN;
    int i = 0, sum = 0;
    solve(arr, i, maxi, sum);
    cout<<maxi;
    return 0;
}