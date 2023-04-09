#include<bits/stdc++.h> 
using namespace std;

int main(){
    int rowCnt, colCnt;
    cin>>rowCnt>>colCnt;
    
    for(int row = 0; row < rowCnt; row++)
    {
        if(row == 0 || row == rowCnt-1)
        {
            for(int i = 0; i < colCnt; i++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for(int j = 0; j < colCnt-2; j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}