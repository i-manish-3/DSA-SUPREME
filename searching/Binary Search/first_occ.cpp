#include<bits/stdc++.h> 
using namespace std;

int first_occ(vector<int> arr, int key)
{
    int start = 0, end = arr.size() - 1;
    
    int index = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == key)
        {
            index = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return index;
}

int main(){
    vector<int> arr{1,2,2,4,4,4,4,5,6,7,8};
    cout<<first_occ(arr,8);
    return 0;
}