// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
    

//     int n = 5; 

//     for(int row = 0; row < n; row++)
//     {
//         for(int col = 0; col < n - row; col++)
//         {
//             if((row == 0) || (col == 0 )|| ( col == (n - row - 1)))
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// * * * * *
// *     *
// *   *
// * *
// *   


// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
    
//     int n = 5;
//     for(int row = 0; row < n; row++)
//     {
//         for(int sp = 0; sp < row; sp++)
//         {
//             cout<<" ";
//         }
//         for(int col = 0; col < n; col++)
//         {
//             if(row == 0)
//             {
//                 cout<<"*";
//             }
//             else if((col == row + 1) || (col == n - row - 1))
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h> 
using namespace std;

int main(){
    int a = 5;
    cout<< (++a) * (++a);
    return 0;
}

// * * * * *
//  *     *
//   *   *
//    * *
//     *




