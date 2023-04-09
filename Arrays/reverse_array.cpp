#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    int l = 0, r = n - 1;
    while(l < r)
    {
        swap(arr[l++], arr[r--]);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}