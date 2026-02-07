#include<iostream>
using namespace std;

int main(){
     char ch;
     cin>>ch;
//      if ( ch>=97 && ch<=122){
//         cout<<"this is lowercase \n";
//      }
//      else if( ch>=65 && ch<=90){
//         cout<<"  this is upper case\n";
//      }
//      else{
//         cout<<" this is number ";
//      }
     if ( ch>='a' && ch<='z'){
        cout<<"this is lowercase \n";
     }
     else if( ch>'A' && ch<='Z'){
        cout<<"  this is upper case\n";
     }
     else{
        cout<<" this is number ";
     }
}
// }