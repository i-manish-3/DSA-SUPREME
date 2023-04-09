#include <bits/stdc++.h>
using namespace std;

int findCeil(vector<long long> v, long long n, long long x){
    
    long long start = 0, end = n - 1, mid;
    
    int res = -1;
    
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        
        if(v[mid] == x)
        {
            return mid;
        }
        else if(v[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            res = v[mid];
            end = mid - 1;
        }
    }
    return res;
    }

int main() {
	
    long long n = 9;
    long long x = 5;
    
    vector<long long> v = {1,2,3,4,8,10,10,12,19};
    cout << findCeil(v, n, x) << endl;  
	return 0;
}