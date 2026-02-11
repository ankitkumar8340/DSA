

// Sliding window :- 

// {  |   |        }

// data of sales = 2, 3, 8, 7 , 9 , 4


// 2 + 3+ 8 = 13
// 3+8+7= 18
// 8+7+9= 24
// 7+9+4= 20
//                         | 3,8,7|
// |2, 3, 8 | = 13   => 13 - 2 +7 =18  => 18-first(3) + next(9)= 24  =>  24 - first(8) + next(4)= 20 

#include <iostream>
using namespace std;
 

int main(){
    int arr[]= {2,3,8,7,9,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int w = 3;
    int sum = 0;
    for(int i=0;i<w;i++){
        sum=sum+arr[i];
    }
    int first=arr[0],second=arr[1], third=arr[2]; 
    int max=sum;
    for(int i=w;i<size;i++){
        sum = sum-arr[i-w]+arr[i];
    
        if(sum>max){
            max= sum;
            first = arr[i-2];
            second = arr[i-1];
            third = arr[i];
        }
    }

    cout<<"Largest subarray "<<first<<" "<<second<<" "<<third<<" ";
    cout<<"Maxsum "<<max;



}



















