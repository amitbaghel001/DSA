#include<iostream>
#include<string>
using namespace std;

char maxOcccharacter( string str ,int n){
int arr[26]= {0};
for(int i=0;i<n;i++){
 char ch=str[i];
 
 int number=0;
 if(ch>='a' && ch<='z'){
        number=ch-'a';
 }
 else{
    number=ch-'A';
}
 arr[number]++;
}
int maxi=-1,ans=0;
for(int j=0;j<26;j++){
    if(maxi<arr[j]){
        ans=j;
        maxi=arr[j];
    }
  
}
 cout<<"count is "<<maxi << endl;
char finalAns=ans+'a';
return finalAns;
}
int main(){

    string str;
    cout<<"enter the string :";
    cin>> str;
    int n = str.length();

   char ch= maxOcccharacter(str,n);
   cout<<ch;
}