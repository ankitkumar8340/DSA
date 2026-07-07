#include <iostream>
#include <unordered_map>
using namespace std;

class Work{
    public:
    void largest(const unordered_map<int, int> &freq){
        int largestKey= -1;
        int maxFreq= 0;

        for(auto it: freq){
            if(it.second > maxFreq){
                maxFreq=it.second;
                largestKey=it.first;
            }
        }
        cout<<"Most frequency number : "<<largestKey<<endl;
        cout<<"Most frequency count : "<<maxFreq<<endl;
    }
    void counts(int n, int arr[]){
        unordered_map<int, int> freq;

        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(auto it: freq){
            cout<<it.first<<" "<<it.second<<endl;
        }

        largest(freq);
        

    }

};

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Work w;
    w.counts(n, arr);
}