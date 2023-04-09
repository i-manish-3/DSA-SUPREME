#include<bits/stdc++.h> 
using namespace std;
void print(vector<int> & arr, int size)
{
    if(size < 0)
    {
        return;
    }
    print(arr, size-1);
    cout<<arr[size];
}

int main(){
    vector<int> arr {1,2,3,4,5};
    int size = arr.size();
    print(arr,size-1);
    return 0;
}