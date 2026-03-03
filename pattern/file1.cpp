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
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print6(int n){
    
    /*
       **
      **
     **
    **
   **
  **
 **
    */
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j; j<2*i+1;j++){
            cout<<"*";
        }
        for(int j;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}

void print7(int n){
/*
          0 1 2 3 4
       0      *                 [2, 1, 2]   2*i+1 = stars
       1    * * *               [1, 3, 1]
       2  * * * * *             [0, 5, 0]
 
       0 --> 2 space star  2 space
       1 --> 1 space star  1 space
       2 --> no space star

       for printing space n= 3 (n-row-1) = space before and after
       for printing star 2*i+1 =>i =0 =>  0+1 = 1 star
       for printing star 2* i+1 => i=2 => 2*2+1 = 5 stars


    */

    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){

    /*
         012345678
     0   *********         [0, 9, 0]
     1    *******          [1, 7, 1] 
     2     *****           [2, 5, 2]
     3      ***            [3, 3, 3]
     4       *             [4, 1, 4]

     i = 0  space = 0
     i= 1 space = 1 , 1   so  space = i
     for star (2*(n-i))-1 
     like i = 0 => (2*(5-0))-1 = 9
     like i = 1 => (2*(5-1))-1 = 7
     like i = 2 => (2*(5-2))-1 = 5
    */
   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int j=0;j<(2*(n-i))-1; j++){
        cout<<"*";
    }
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
   }

}

void print9(int n){
    /*
             012345678
    0            *                  [4, 1, 4]
    1           ***                 [3, 3, 3]
    2          *****                [2, 5, 2]
    3         *******               [1, 7, 1]
    4        *********              [0, 9, 0]
    5        *********
    6         *******
    7          *****
    8           *** 
    9            * 
    
    for upper - {
        space = (n-1/2)-i-1
        star= 2*i+1 

    }

   


    */
}

void print10(int n){
    /*
        n= 5
        outer = 2*n-1
        stars = i
        if(i > n ) stars = 2*n-i
    1   *
    2   **
    3   ***
    4   ****
    5   *****
    6   ****
    7   ***
    8   **
    9   *
    */

    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i > n ) stars = 2*n -i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

    }

}

void print11(int n){
    /*

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    
    */
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if(i%2==0){
            if(j%2 != 0){
                cout<<"0 ";
            }else{
            cout<<"1 ";
            }
        }
        else if(i%2!=0){
            if(j%2 != 0){
                cout<<"1 ";
            }else{
            cout<<"0 ";
            }
        }

    }
    cout<<endl;
   }

//    or

for(int i=0;i<n;i++){
    int start=1;
    if(i%2==0) start=1;
    else start=0;
    for(int j=0;j<i;j++){
        cout<<start;
        start=1-start;   //its flip the value 1-1 =0  and 1-0 = 1
    }
    cout<<endl;
}



}







int main(){

   int n;
   cin>>n;
//    print1(n);
//    print2(n);
//    print3(n);
//    print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);
    // print10(n);
    print11(n);

   




}










































