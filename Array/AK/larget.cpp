#include <iostream>
#include<climits>
using namespace std;

int largest(int arr[], int n){
    int largest = arr[0];
    for(int i=1;i<n ;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int secondLargest(int arr[], int n){
    int second = INT_MIN;
    int largest = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
    }
    return second;

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

    int large = largest(arr, n);
    int secondlargest = secondLargest(arr, n);

    cout<<"The largest element is "<<large<<endl;
    cout<<"The Second largest element is "<<secondlargest<<endl;
    

}
















