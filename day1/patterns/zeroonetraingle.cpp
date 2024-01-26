#include<iostream>
using namespace std;

int main(){
    cout<<"printing"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}