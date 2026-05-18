#include <iostream> 
using namespace std;
class Work{
    public:
    void RightRotate(int n, int arr[]){
        int ele= arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=ele;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
    }
    void LeftRotate(int n, int arr[]){
        int ele=arr[0];
        for(int i=1;i<=n-1;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=ele;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Work w;
    // w.RightRotate(n, arr);
    w.LeftRotate(n, arr);





}







