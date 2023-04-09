#include<bits/stdc++.h> 
using namespace std;
void print(int n)
{
    if(n == 0)
    {
        return;
    }
    int ans = n % 10;
    n = n/10;
    print(n);
    cout<<ans<<" ";
}
int main(){
    print(64700);
    return 0;
}