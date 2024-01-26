#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"converting the no from the binary to the decimal format"<<endl;
    int no;
    cout<<"enter a no"<<endl;
    cin>>no;
    int i=0;
    long long int decimal=0;
    while(no){
        int r=no%10;
        no=no/10;
        // now we are finding the decimal no corresponding to that
        decimal=decimal+pow(2,i)*r;
        i++;
    }
    cout<<"the no in the decimal format is "<<decimal<<endl;

}