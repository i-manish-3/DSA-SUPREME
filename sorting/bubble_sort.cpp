#include<bits/stdc++.h> 
using namespace std;

int main(){
    vector<int> arr{6,3,4,2,1,7,5};
    int n = arr.size();
    bool flag = false;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(flag == false)
        {
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}