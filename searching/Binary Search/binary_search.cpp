#include<bits/stdc++.h> 
using namespace std;

int binary_search(vector<int> arr, int key)
{
    int start = 0, end = arr.size()-1;

    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,6,8,9,10};
    cout<<binary_search(arr,10);
    return 0;
}