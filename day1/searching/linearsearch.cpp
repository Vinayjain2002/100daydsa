#include<iostream>
using namespace std;

int main(){
    cout<<"going to implement the linear search"<<endl;
    int arr[]={1,50,0,5,87,-90,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=5;
    bool find=false;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            find=true;
            cout<<"element is found "<<i<<endl;
            break;
        }
    }
    if(!find){
        cout<<"element is not found"<<endl;
    }
}