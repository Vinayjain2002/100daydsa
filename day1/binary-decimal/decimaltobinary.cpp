#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"converting the decimal to a no in the binary format"<<endl;
    int no;
    cout<<"enter a no"<<endl;
    cin>>no;
    vector<int>ans;
    while(no){
        int r=no%2;
        no=no>>1;
        ans.insert(ans.begin(),r);
        // so we had inserted the remainder
    }

    // printing the binary format
    for(int a: ans){
        cout<<a<<endl;
    }
}