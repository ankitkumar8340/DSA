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

    int BinarySearch(int arr[], int target, int size){
        int left =0, right=size-1;

        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]<target) left=mid+1;
            else right= mid-1;
        }

        return -1;
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
    // cout<<w.HighSearch(arr, size);
    // cout<<w.LowSearch(arr);

    int target;
    cin>>target;
    cout<<w.BinarySearch(arr, target, size);

}