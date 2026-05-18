#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]= {1,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    // int arr1[arr[n-1]]= {0};
    vector<int> arr1(arr[n-1] + 1, 0);  

    for(int i=0;i<n;i++){
        arr1[arr[i]]++;
    }

    for(int i=arr[0]; i<arr[n-1];i++){
        if(arr1[i] == 0){
            cout<<i<< " ";
        }
    }




}