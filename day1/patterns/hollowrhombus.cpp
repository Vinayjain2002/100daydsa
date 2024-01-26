#include<iostream>
using namespace std;

int main(){
    cout<<"going to define the hollow rhmbus"<<endl;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<"  ";
        }
        for(int j=0;j<5;j++){
            if(i==0 || j==0 || i==4 || j==4){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}