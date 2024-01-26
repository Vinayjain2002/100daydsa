#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,30,4,5};

    cout<<"array contains a pointer which is reffered as the arr"<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<"array is passed by the reffrence when passed inside a function"<<endl;

}