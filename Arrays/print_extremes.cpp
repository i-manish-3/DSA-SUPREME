#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    int left = 0, right = n - 1;
    while(left < right)
    {
        cout<<arr[left++]<<" "<<arr[right--]<<" ";
    }
    if(left == right)
    {
        cout<<arr[right];
    }
    return 0;
}