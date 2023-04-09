#include<bits/stdc++.h> 
using namespace std;

bool chk(vector<int> &arr, int i)
{
    int n = arr.size();
    if(i >= n)
    {
        return true;
    }
    cout<<arr[i];
    if(arr[i] > arr[i+1])
    {
        return false;
    }

    return chk(arr, ++i);


}
int main(){
    vector<int> arr = {1,2,4,5,6,0};
    cout<<chk(arr, 0);
    return 0;
}