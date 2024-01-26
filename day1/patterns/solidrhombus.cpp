#include<iostream>
using namespace std;

int main(){
    cout<<"printing"<<endl;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<" ";
        }
        // now printing the stars
        for(int j=0;j<5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}