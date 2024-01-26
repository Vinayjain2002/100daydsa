#include<iostream>
using namespace std;

int main(){
    cout<<"going to find all the prime no in a range"<<endl;
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    bool isprime=true;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"the no is a prime no"<<endl;
    }
    else{
        cout<<"the no is not a prime no"<<endl;
    }
}