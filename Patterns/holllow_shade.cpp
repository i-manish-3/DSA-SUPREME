#include<bits/stdc++.h> 
using namespace std;
 
int main(){
    int n = 5;
    for(int row = 0; row < n; row++)
    {
        // space

        for(int sp = 0; sp < n - row - 1; sp++)
        {
            cout<<" ";
        }

        // star
        if(row == 0)
        {
            cout<<"*"<<endl;
        }else
        {
            cout<<"*";
        }

        for(int col = 0; col < row + 1; col++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}