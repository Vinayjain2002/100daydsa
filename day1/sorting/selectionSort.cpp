#include<iostream>
using namespace std;

int main(){
    int arr[]={1,-30, 20, 50, -90,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-1;i++){
        int index=i;
            for(int j=i+1;j<size;j++){
                if(arr[j]<arr[index]){
                    index=j;
                }
            }
            if(index!=i){
                swap(arr[index], arr[i]);
            }
    }

    // going to print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}