/*
patterns  --> nested  

1. for ouer loop, count th no of lines  (rows)
2. for the inner loop  focus on the columns and connect them somehow to the rows
3. print them inside the inner loop
4. observer symmetry [optional]
*/

#include <bits/stdc++.h>
using namespace std;

void print1(int n){

     /*
    * * * *
    * * * *
    * * * *
    * * * *
    */

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print2(int n){
     /*
    * 
    * * 
    * * * 
    * * * *
    */

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){

     /*
    1 
    1 2 
    1 2 3 
    1 2 3 4
    */
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}

void print4(int n){
 /* 
    * * * *
    * * * 
    * * 
    * 
    */
//    for(int i=n;i>=0;i--){
//     for(int j=i;j>=0;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
//    }

//    --or --  n-row +1   like for i = 2  j = 6-2+1 = 3

   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
   }


}

void print5(int n){
    
}

int main(){

   int n;
   cin>>n;
//    print1(n);
//    print2(n);
//    print3(n);
//    print4(n);
    print5(n)
   




}










































