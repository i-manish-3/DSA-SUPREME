#include<bits/stdc++.h> 
using namespace std;
void findMax(vector<int> & arr, int i, int n, int&maxi)
{
    if(i >= n)
    {
        return;
    }
    if(arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findMax(arr, ++i, n, maxi);
}

int main(){
    vector<int> arr {1,4,5,33,66,8,22};
    int maxi = INT_MIN;
    findMax(arr, 0, 7, maxi);
    cout<<maxi;
    return 0;
}