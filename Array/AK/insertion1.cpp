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

 void insertAtAny(int arr[], int size){
    int pos=3;
    for(int i=size-1; i>=pos;i--){
        arr[i+1]=arr[i];
    }
    size++;
    arr[pos]=33;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 }

 void bubbleSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 }

 void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int minindex= i;
        for(int j=i+1;j<size;j++){
            if(arr[minindex] > arr[j]){
                minindex=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 }

 void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]> key ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<n;i++){
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
    // insertbeg(arr, n);

    // insertAtEnd(arr, n);

    // insertAtAny(arr, n);

    //sorting 

    // bubbleSort(arr, n);

    // selectionSort(arr, n);

    insertionSort(arr, n);





    

    
    
}




































