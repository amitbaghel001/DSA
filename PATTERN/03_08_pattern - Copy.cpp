#include<iostream>
using namespace std;

// 3.
// 1234
// 1234
// 1234
// 1234

// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<< j ;
//         }
//         cout<<"\n";
//     }


// }
// 4.
// 123
// 456
// 789

// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
// int p=1;
//     for(int i=1;i<=n;i++){
           
//         for(int j=1;j<=n;j++){
         
//             cout<< p ;
//             p=p+1;
//         }
//         cout<<endl;
//     }
// }

// 2.
// 1111
// 2222
// 3333
// 4444
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i;
//         }
//         cout<<"\n";
//     }
// }

// 6.
// 1
// 22
// 333
// 4444

// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }

// }

// 7.
// 1
// 23
// 456
// 78910

// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
// int p=1;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<p;
//             p=p+1;
//         }
//         cout<<endl;
//     }

// }
// 8.
//  1 
//  2  3 
//  3  4  5 
//  4  5  6  7

// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         int p=i;
//         for (int j=1;j<=i;j++){
//             cout<<" "<<p<< " ";
//            p++;
//         }
//           cout<<endl;
//     }

// }
// 9
//  1 
//  2  1
//  3  2  1
//  4  3  2  1

// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         int p=i;
//         for (int j=1;j<=i;j++){
//             cout<<" "<<p<< " ";
//            p--;
//         }
//           cout<<endl;
//     }

// }

// 10.
// 1 1 1 1
//   2 2 2 
//     3 3
//       4

//       int main(){
//         int n;
//         cout<<"enter no. of rows:";
//         cin>>n;
    
//         for(int i=1;i<=n;i++){
//             for(int nsp=1;nsp<i;nsp++){
//                 cout<< " ";
//             }
               
//         for(int j=i;j<=n;j++){
//               cout<<i;
        
//         }  
//         cout<<endl;
//     }
// }
  int main(){
        int n;
        cout<<"enter no. of rows:";
        cin>>n;
    
        for(int i=1;i<=n;i++){
            for(int nsp=n;nsp>1;nsp--){
                cout<< " ";
            }
               
        for(int j=1;j<=i;j++){
              cout<<i;
        
        }  
        cout<<endl;
    }
}
