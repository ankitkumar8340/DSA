#include <bits/stdc++.h>
using namespace std;

//void
//return
//parameterised
//non parameterised

void printName(string a){
    cout<<a<<endl;
}

int sum (int num1, int num2){
    int num3 = num1+num2;
    return num3;
}

void doSomething(int num){
    cout<<num<<endl;
    num+=4;
    cout<<num<<endl;
    num+=4;
    cout<<num<<endl;
}

void doSomethingss(int &num){
    cout<<num<<endl;
    num+=4;
    cout<<num<<endl;
    num+=4;
    cout<<num<<endl;
}


int main(){

    // printName("Ankit");
    // int num1, num2;
    // cin>>num1>>num2;

    // int res = sum(num1, num2);
    // cout<<res;

    // int maxx= max(12,13);
    // cout<<maxx<<endl;

    int num = 10;
    doSomething(num);   //pass by value or copy sended not sending original
    cout<<num<<endl;

    doSomethingss(num);   //pass bye refrence send the orginal value
    cout<<num<<endl;


}