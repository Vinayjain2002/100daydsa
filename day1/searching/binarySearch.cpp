#include<iostream>
using namespace std;

int main(){
    cout<<"going to implement the binary Search"<<endl;
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=7;
    // so we had find out the size of the array
    int left=0;
    int right=size-1;
    bool found=false;

    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==element){
            found=true;
            cout<<"the element is found "<<mid<<endl;
            break;
        }
        else if(arr[mid]>element){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(!found){
        cout<<"the element is not found in the array"<<endl;
    }
}