//1 2 3 4
//2 3 4 1

#include <iostream>
using namespace std;


void oneTimeRotate(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void multipleTimeRotate(int arr[], int n){
    for(int j=0; j<3;j++){
        int temp = arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
        cout<<"After "<<j<<" time rotation : "<< " ";
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the length of aaray: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the element in array ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //one time rotate

    // oneTimeRotate(arr, n);

    multipleTimeRotate(arr, n);

    



}













