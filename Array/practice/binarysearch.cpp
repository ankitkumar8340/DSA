#include<iostream>
using namespace std;
struct binarysearch{
    int binary(int n, int arr[], int ele){
        int left=0, right=n-1;
        while(left<=right){
            int mid= left+(right-left)/2;

            if(arr[mid]==ele){
                return mid;
            }
            else if(arr[mid] < ele){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele; 
    cin>>ele;
    binarysearch b;
    cout<<b.binary(n, arr, ele);

}









