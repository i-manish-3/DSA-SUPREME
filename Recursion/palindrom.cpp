#include<bits/stdc++.h> 
using namespace std;

bool isPlindrom(string s, int start, int end)
{
    if(start >= end)
    {
        return true;
    }
    if(s[start] != s[end])
    {
        return false;
    }
    return isPlindrom(s, start + 1, end - 1);
}

int main(){
    string s = "raceecar";
    int start = 0, end = s.size() - 1;
    cout<<isPlindrom(s,start, end);
    return 0;
}