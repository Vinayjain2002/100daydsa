#include<iostream>
using namespace std;

int main(){
    cout<<"Writting the code to reverse the array"<<endl;
    int arr[]={1,5,9,5,7,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size/2;i++){
        swap(arr[i], arr[size-1-i]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}