// #include<bits/stdc++.h> 
// using namespace std;

// void printSubsequence(string s, string ans, int i)
// {
//     int n = s.length();
//     if(i >= n)
//     {
//         cout<<ans<<endl;
//         return;
//     }

//     // exclude

//     printSubsequence(s, ans, i+1);

//     // include
//     ans += s[i];
//     printSubsequence(s, ans, i+1);
// }

// int main(){
//     string s = "abc";
//     string ans = "";
//     printSubsequence(s,ans,0);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printAll(string s, string ans, int i)
{
    int size = s.length();

    if(i >= size)
    {
        cout<<ans<<endl;
        return;
    }

    //  not pick
    printAll(s, ans, i+1);

    // pick
    ans += s[i];
    printAll(s, ans, i+1);
}

int main() {
    string s = "manish";
    string ans = "";
    printAll(s, ans, 0);
    return 0;
}