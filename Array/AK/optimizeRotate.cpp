#include <iostream>
using namespace std;

struct OptimizedRotation{

    void reverse(int arr[], int sindex, int lindex){
        int i=sindex, j = lindex;
        while(lindex > sindex){
            swap(arr[lindex], arr[sindex]);
            sindex++;
            lindex--;

        }
    }
    
    void LeftRotate(int arr[], int size, int nor){
        if(nor>size || nor == 0) return;
        reverse(arr,0, nor-1);
        reverse(arr,nor, size-1);
        reverse(arr, 0, size-1);
    }

    void RightRotate(int arr[], int size, int nor){
        if(nor>=size || nor==0) return;
        reverse(arr, size-nor, size-1);
        reverse(arr, 0, size-nor-1);
        reverse(arr, 0, size-1);
    }

};


int main(){
    int arr[]= {1,2,3,4,6,7,8};
    OptimizedRotation o;
    int size = sizeof(arr)/sizeof(arr[0]);

    
    o.LeftRotate(arr, size, 3);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    o.RightRotate(arr, size, 3);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}























