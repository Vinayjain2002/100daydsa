#include<iostream>
using namespace std;

int main(){
    cout<<"going to print the butterfly pattern"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        // now printing the extra spaces
        for(int j=i+1;j<5;j++){
            cout<<" "<<" ";
        }
        // again printing the spaces
        for(int j=0;j<5-i-1;j++){
            cout<<" "<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //now printing the below portion
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            cout<<"*"<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" "<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}