#include<iostream>
using namespace std;

int main(){
    cout<<"finding the max Subarray sum"<<endl;
   
    // brute force approch
    int max_sum=-9999; int arr[]={1,-2,6,-1,3};

    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=arr[k]+sum;
            }
            if(sum>max_sum){
                max_sum=sum;
            }
        }
    }
    cout<<max_sum<<endl;
}