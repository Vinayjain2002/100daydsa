#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,5,-90,50,80,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"now sorting the array in the reverse order"<<endl;
    sort(arr,arr+size,greater<int>());

     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}