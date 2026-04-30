#include <iostream>
using namespace std;

struct Rotate{

    void SwapArray(int arr[], int size){
      int i=0;
      int j=size-1;
      while(j>i){
        swap(arr[i], arr[j]);
        i++;
        j--;
      }
      for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    }

    int* RightRotate(int arr[], int size, int nof){
        for(int j=0;j<nof;j++){
        int ele=arr[size-1];
        for(int i=size-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=ele;
    //     for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
        }
        return arr;
    
    }

    void LeftRotate(int arr[], int size, int n){
        for(int j=0;j<n;j++){
        int ele=arr[0];
        for(int i=1;i<size;i++){
            arr[i-1]=arr[i];
        }
        arr[size-1]=ele;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }

};

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int nof;
    cin>>nof;

    Rotate r;
    // r.SwapArray(arr, size);
    int* arr1= r.RightRotate(arr, size, nof);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // r.LeftRotate(arr, size, 4);

    //  for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
}











