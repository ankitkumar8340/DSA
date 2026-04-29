
#include <iostream>
using namespace std;
class Dog{
    private:
    int a=10;
    int b=20;
    // friend int abc(){
    //     cout<<a+b;
    // }
    public:
    void prints(){
        cout<<a<<b;
    }
    
    int search(int &arr){

    }
};

struct basic
{
  int aa=12;
  int b = 13;
};

int main(){
    Dog d;
    d.prints();
    // d.abc();
    basic b;
    cout<<b.aa+b.b;
    
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Dog d1;
    d1.search(*arr);


}











