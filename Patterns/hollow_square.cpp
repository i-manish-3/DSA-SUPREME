// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int row = 0; row < n; row++)
//     {
//         if(row == 0 || row == n - 1)
//         {
//             for(int col = 0; col < n; col++)
//             {
//                 cout<<"* ";
//             }
//         }
//         else
//         {
//             cout<<"* ";
//             for(int i = 0; i < n - 2; i++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// /*
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// */


#include<bits/stdc++.h> 
using namespace std;

int main(){
    int x  = 3, y = 4, z = 10;
    cout<<++z +y -y +z + x++;
    return 0;
}