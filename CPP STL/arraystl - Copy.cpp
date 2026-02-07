#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,5}; // baisc tareeka static aaray ke liye
    array<int,4>a={5,6,1,4} ;//  yeh bhi static array ka hi tarika hai
    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\n the elemnt at index 2 is "<< a.at(2)<<endl;
    cout<<"empty hai ya nhi "<< a.empty()<<endl;
    cout<<"first elemnt is "<< a.front()<<endl;
    cout<<"last elemnt is "<< a.back()<<endl;
}
