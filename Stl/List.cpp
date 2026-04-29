#include <iostream>
#include <list>

using namespace std;


void print(list<int> l){
    for( int a : l){
        cout<< a <<" ";
    }
}

int main(){

    list<int> ls;
    ls.push_back(10);  //{10}
    ls.emplace_back(20);  //{10, 20};

    ls.push_front(30);   //{30, 10, 20};
    ls.emplace_front(40);  //{40, 30, 10, 20};

    print(ls);


}















