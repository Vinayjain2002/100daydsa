#include<iostream>
using namespace std;
void print(int arr[]){
    cout<<"printing the array"<<endl;
    cout<<arr[2]<<endl;
    arr[2]=600;
}
int main(){
    int arr[5]={0};
    arr[2]=500;
    print(arr);
    cout<<arr[2]<<endl;
}