#include<bits/stdc++.h> 
using namespace std;

int positive_first(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int res = 0;
    while(s <= e)
    {
        if(v[mid] > 0)
        {
            res = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return res;
}
int negative_last(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int res = 0;
    while(s <= e)
    {
        if(v[mid] < 0)
        {
            res = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return res;
}


int main(){
    vector<int> v = {-3,-2,-1,0,0,1,2};
    cout<<positive_first(v)<<endl;
    cout<<negative_last(v);
    return 0;
}