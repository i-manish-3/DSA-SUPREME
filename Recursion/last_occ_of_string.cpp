#include<bits/stdc++.h> 
using namespace std;

int find(string s, char key, int &ans, int size)
{

    if(size < 0)
    {
        return ans;
    }
    if(s[size] == key)
    {
        ans = size;
        return ans;
    }
    return find(s, key, ans,size - 1);
}

int main(){
    string s = "abcdsdfdg";
    char key = 'k';
    int ans = -1;
    int n = s.length();
    ans = find(s,key,ans, n);
    if(ans == -1)
    {
        cout<<"key not present"<<endl;
    }
    else{
        cout<<"key's last occ is at index: "<<ans<<endl;
    }
    return 0;
}