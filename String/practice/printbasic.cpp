#include <iostream>
using namespace std;

int main(){
    string s="Hello";

    //index for-loop
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }

    cout<<endl;

    //while loop
    int i=0;
    while(i<s.size()){
        cout<<s[i];
        i++;
    }

    cout<<endl;

    //range-based for
    for(char c: s){
        cout<<c;
    }

    cout<<endl;

    //iterator

    for(auto it=s.begin(); it != s.end(); it++){
        cout<<*it;
    }

}









