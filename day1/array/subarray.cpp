#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void print(vector<int>arr){
//     for(int a:arr){
//         cout<<a<<", ";
//     }
//     cout<<endl;
// }

// int main(){
//     cout<<"going to find all the possible subarray"<<endl;
//     int arr[]={2,4,6,8,10};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         vector<int> ans;
//         for(int j=i;j<size;j++){
//             //we are placing the elements
//             ans.push_back(arr[j]);
//             print(ans);
//         }
//     }
// }

// or

int main(){
    cout<<"going to find all the possible subarray"<<endl;
    int arr[]={2,4,6,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
}