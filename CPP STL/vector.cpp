#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "the capacity of this at this time is " << v.capacity() << endl;
    v.push_back(1);
       cout<<"the capacity of this at this time is "<<v.capacity()<<endl;
    v.push_back(2);
    cout << "the capacity of this at this time is " << v.capacity() << endl;

    v.push_back(8);
    cout << "the capacity of this at this time is " << v.capacity() << endl;
    cout<<" size of this vec is "<< v.size()<<endl;
    cout<<"empty hai ya nhi "<< v.empty()<<endl;
    cout<<"first elemnt is "<< v.front()<<endl;
    cout<<"last elemnt is "<< v.back()<<endl;
    cout<<"vector before popup";
    for(int i=0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after the popup :";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
cout<< "before clear size :"<< v.size()<<endl;
v.clear();
cout<< "after clear size : "<< v.size()<<endl;
}
