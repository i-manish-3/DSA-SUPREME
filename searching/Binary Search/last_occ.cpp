#include<bits/stdc++.h> 
using namespace std;

int last_Occ(vector<int> arr, int key)
{
    int start = 0, end = arr.size() - 1;
    
    int index = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            index = mid;
            start = mid + 1;
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
    vector<int> arr{1,2,2,4,4,4,4,5,6,7,10};
    cout<<last_Occ(arr, 10);
    return 0;
}