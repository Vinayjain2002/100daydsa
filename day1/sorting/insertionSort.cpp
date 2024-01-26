#include<iostream>
using namespace std;

int main(){
    cout<<"going to implement the insertion sort"<<endl;
    int arr[]={1,20,-90,0,100};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<size;i++){
        // now we are picking a element
        int element=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>element){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=element;
    }
    cout<<"the array is sorted"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}