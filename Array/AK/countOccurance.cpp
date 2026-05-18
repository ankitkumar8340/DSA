#include <iostream>
#include <unordered_map>
using namespace std;

class Count{
    public:

    void CountOccurance(int arr[], int size){
        unordered_map<int, int> count;
        for(int i=0;i<size;i++){
            count[arr[i]]++;
        }
        for(auto it : count){
            cout<<it.first<<" "<<it.second<<endl;
        }

        int largest = count[arr[0]];
        int i=1;
        for(auto it : count){
            if(count[arr[i]]> largest ){
                
            }
        }
    }


};

int main(){
    int arr[]={1,2,1,1,3,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    Count obj;
    obj.CountOccurance(arr, size);



}


