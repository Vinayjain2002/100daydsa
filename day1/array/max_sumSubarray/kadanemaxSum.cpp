#include<iostream>
using namespace std;

int main(){
    cout<<"going to implement the kadane's algorithm"<<endl;
    int arr[]={-1,-2,-6,-1,-3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int max_sum=-999;
    bool allnegative=true;
    for(int i=0;i<size;i++){
        max_sum=max(max_sum, arr[i]);
        if(arr[i]>0){
            allnegative=false;
            break;
        }
    }
    if(allnegative){
        cout<<"the max_sum is "<<max_sum<<endl;
    }
    else{
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    }
    cout<<"the value of the max_sum is "<<max_sum<<endl;

}