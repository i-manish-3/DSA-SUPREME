#include<bits/stdc++.h> 
using namespace std;

int search(vector<int> &arr, int key)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(mid >= start && arr[mid - 1] == key)
        {
            return mid - 1;
        }
        else if(mid <= end && arr[mid + 1] == key)
        {
            return mid + 1;
        }

        if(arr[mid] > key)
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
        mid = start + (end - start) / 2;
    }
    return - 1;
}

int main(){
    vector<int> arr = {10,3,40,20,50,80,70};
    int key = 70;
    cout<<search(arr,key);
    return 0;
}