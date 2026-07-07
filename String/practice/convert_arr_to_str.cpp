#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char arr[]= "DSA Prep";
    string s;
    for(int i=0; i<strlen(arr);i++){
        s.push_back(arr[i]);
    }

    string s1 = arr;

    cout<<s<<endl;  //DSA Prep
    cout<<s1<<endl;  //DSA Prep

    char arr1[100];

    // s.copy(arr1, s1.length(), 0);
    // arr1[s1.length()] = '\0';

    // cout<<arr1;
    int i;
    for(i=0;i<s1.length(); i++){
        arr1[i]= s1[i];
    }
    arr1[i]='\0';
    cout<<arr1;





}