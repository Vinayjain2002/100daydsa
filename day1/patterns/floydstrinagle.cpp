#include<iostream>
using namespace std;

int main(){
    cout<<"printing"<<endl;
    int cnt=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<cnt<<" ";
            cnt=cnt+1;
        }
        cout<<endl;
    }

}