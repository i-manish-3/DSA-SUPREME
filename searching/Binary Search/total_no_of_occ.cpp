#include<bits/stdc++.h> 
using namespace std;

int first_occ(vector<int> arr, int key)
{
    int start = 0, end = arr.size() - 1;

    int sIndex = - 1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == key)
        {
            sIndex = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key)
        {
            end = mid  - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return sIndex;
}

int last_occ(vector<int> arr, int key)
{
    int start = 0, end = arr.size() - 1;

    int eIndex = - 1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            eIndex = mid;
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
    return eIndex;
}

int main(){
    vector<int> arr = {1,2,2,3,4,4,4,4,5,6,7,7,8,9};

    int s = first_occ(arr, 1);
    cout<<first_occ(arr, 1)<<endl;
    int e = last_occ(arr, 1);
    cout<<last_occ(arr, 1)<<endl;
    cout<<e-s + 1;
    return 0;
}