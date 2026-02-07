#include<iostream>
using namespace std;

int length(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
count++;

    }

    return count;
}

char tolower(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char naya=ch-'A'+'a';
       return naya;
    }
     
}

bool ispalindrome(char ch[], int size){

    int s=0;
    int e=size-1;
    while(s<=e){
        if(tolower(ch[s]) !=tolower(ch[e])){
            return 0;
        }
        else{
            s++;
        e--;}
    }
    return 1;
}

int main(){
    char ch[100];
    cout<<"enter the string:";
    cin>>ch;
    int size=length(ch);
    cout<<ispalindrome(ch,size);
}