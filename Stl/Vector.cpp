
#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> v){
    for(int a: v){
        cout<<a<<" ";
    }
}

int main(){

    vector<int> v;
    v.insert(v.begin(), 2, 10);
    
    v.push_back(20);
    
    v.emplace_back(30);

    // vector<pair<int, pair<int, int>>> v1;

    // v1.push_back({12, {10,10}});

    // cout<< v1[0].first;
    // cout << v1[0].second.first;
    // cout<< v1[0].second.second;

    // vector<int>::iterator a= v.begin();

    // // a++;
    // cout<< *(a)<<" ";
    // a=a+1;
    // cout<< *(a)<<" ";

    // v.at(3);

    for( auto a= v.begin(); a != v.end(); a++){
        cout<<*(a)<<" ";
    }

    cout<<endl;

    v.erase(v.begin()+1);

    v.erase(v.begin()+1, v.begin()+3);


    v.insert(v.begin(), 3, 12);

    vector<int> copy(2, 11);

    v.insert(v.begin()+2, copy.begin(), copy.end());

    v.pop_back();

    v.clear();
    cout<<v.empty();












    
    
    
    




    
    print(v);
}



















