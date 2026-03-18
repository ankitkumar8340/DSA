#include <iostream>
using namespace std;

void sum(int a, int b){
    cout<<a+b<<endl;
}

int add(int a, int b){
    return a+b;
}

int main(){

    int a=10;
    int b=12;

    int c = add(a,b);
    sum(a,b);
    cout<< c <<endl;

    return 0;
}


