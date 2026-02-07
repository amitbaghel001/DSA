#include<iostream>
using namespace std;

int getlenght(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
{
    count++;
}
return count;
}

void stringReverse( char ch[],int n){
    int s=0;
    int e=n-1;
     while(s<=e){
        swap(ch[s++] , ch[e--]);
     }
     cout<<"reverse string is "<<ch;
}
int main(){
    char name[20];
    cout<<"enter your name:";
    // cin>>name;
    cin.getline(name,20);
    // name[2]='\0';
      cout<<"your name is "<<name;
      cout<<endl;
      
       int  lengtharr=getlenght(name);
      cout<<"length of array is "<<lengtharr<<endl;
      stringReverse(name,lengtharr);
}
