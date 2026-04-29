#include <iostream>
using namespace std;

struct Work{

    int HighSearch(int* arr, int size){
        int high=arr[0];
        for(int i=1;i<size;i++){
            if(high<arr[i]){
                high=arr[i];
            }
        }
        return high;

    }

    int LowSearch(int* arr){
        int low=arr[0];
        for(int i=1;i<sizeof(arr);i++){
            if(low>arr[i]){
                low=arr[i];
            }
        }
        return low;
    }



};

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Work w;
    cout<<w.HighSearch(arr, size);
    cout<<w.LowSearch(arr);

}