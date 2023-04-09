#include<bits/stdc++.h> 
using namespace std;

int binarySearch(vector<int> &arr, int s , int e, int key)
{
    int mid = s + (e - s)/2;
    if(s > e)
    {
        return -1;
    }
    if(arr[mid] == key)
    {
        return mid;
    }

    // if(arr[mid] < key)
    // {
    //     return binarySearch(arr, mid+1, e, key);
    // }
    // else{
    //     return binarySearch(arr, s, mid - 1, key);
    // }

    // terneary operator

    return (arr[mid] < key) ? binarySearch(arr, mid+1, e, key) : binarySearch(arr, s, mid - 1, key);
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};

    cout<<binarySearch(arr,0,7,4);
    return 0;
}