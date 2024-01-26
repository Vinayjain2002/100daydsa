#include<iostream>
using namespace std;

int main(){
    cout<<"going to print the diamond pattern"<<endl;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<" "<<" ";
        }
        //now printing the star
        for(int j=0;j<=2*i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //printing the second half
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<5;j++){
            cout<<"*"<< " ";
        }
                for(int j=i;j<5;j++){
            cout<<"*"<< " ";
        }
        cout<<endl;
    }

}