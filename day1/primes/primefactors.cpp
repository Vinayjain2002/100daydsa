#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter a no"<<endl;
    int n;
    cin>>n;
    vector<int>ans;
    while(n%2==0){
        n=n/2;
        ans.push_back(2);
    }

    // now we are going to divide by the 3
    for(int i=3;i*i<=n;i=i+2){
        if(n%i==0){
            ans.push_back(i);
            n=n/i;
        }
    }

    // printing the prime factors
    for(int a:ans){
        cout<<a<<endl;
    }
}