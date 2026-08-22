#include <iostream>
#include <unordered_map>

using namespace std;
class Work{
    public:
    void freq(int size, int arr[]){
        unordered_map<int, int> freq;
        for(int i=0;i<size;i++){
            freq[arr[i]]++;
        }
        
        for(auto it: freq){
            cout<<it.first<<" "<<it.second<<endl;
        }

        for(int i=0; i<size;i++){
            if(freq[arr[i]]==1){
                cout<<arr[i];
                break;
            }
        }
    }






    

};


int main(){
    int arr[]= {100, 100, 200, 300, 400, 200};
    int size= sizeof(arr)/sizeof(arr[0]);
    Work w;
    w.freq(size, arr);
}

















