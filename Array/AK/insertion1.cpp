#include <iostream>
using namespace std;
 //insertion at beg

 void insertbeg(int arr[], int size){
    // size++;
    for(int i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
    }



    size++;
    arr[0]=10;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

 }

 void insertAtEnd(int arr[], int size){
    arr[size]=11;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 }

int main(){
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    insertbeg(arr, n);

    insertAtEnd(arr, n);
    
    
}




































