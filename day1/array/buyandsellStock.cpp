#include<iostream>
using namespace std;

int main(){
    cout<<"going to learn abt the max profit that we could earn by selling the stocks"<<endl;
    int arr[]={7,1,5,3,6,4};
    // int min_value=999;
    // for(int i=0;i<6;i++){
    //     min_value=min(min_value, arr[i]);
    // }
    // int max_value=0;
    // for(int i=0;i<6;i++){
    //     max_value=max(max_value,arr[i]);
    // }

    // cout<<max_value-min_value<<endl;

    //or
    int max_profit=0;
    int min_price=999;
    for(int i=0;i<6;i++){
        if(arr[i]<min_price){
            min_price=arr[i];
        }
        int profit=arr[i]-min_price;
        if(profit>max_profit){
            max_profit=profit;
        }
    }
    cout<<max_profit<<endl;

}