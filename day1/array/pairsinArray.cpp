#include<iostream>
using namespace std;

int main(){
    cout<<"we are going to find out all the possible pairs of the array element"<<endl;
    int arr[]={2,4,6,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
    cout<<"printd"<<endl;
}

//total pairs formula is n(n+1)/2