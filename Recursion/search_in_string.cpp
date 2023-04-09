#include<bits/stdc++.h> 
using namespace std;

bool search(string s, char find, int i)
{
    int n = s.size();
    if(i >= n)
    {
        return false;
    }
    if(s[i] == find)
    {
        return true;
    }
    return search(s, find, ++i);
}

int main(){
    string s = "manish";
    cout<<search(s, 'h', 0);
    return 0;
}