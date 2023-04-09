#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n = 4;
    
    for(int row = 0; row < n; row++)
    {
        int prnt = row +1;
        for(int col = 0; col < 2*row + 1; col++)
        {
            if(col %2 != 0)
            {
                cout<<"*";
            }else
            {
                cout<<prnt;
            }
        }
        cout<<endl;
    }

    for(int row = 3; row >= 0; row--)
    {
        int prnt = row + 1;
        for(int col = 0; col < 2 *row + 1; col++)
        {
            if(col %2 != 0)
            {
                cout<<"*";
            }else
            {
                cout<<prnt;
            }
        }
        cout<<endl;
    }

    return 0;
}