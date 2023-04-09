#include<bits/stdc++.h> 
using namespace std;

bool linear_search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}


int main(){
    int n = 6;
    int arr[n] = {2,1,4,5,6,3};
    int key = -5;
    cout<<linear_search(arr, n, key);
    return 0;
}