#include<iostream>
using namespace std;

int main(){
    cout<<"going to find out the sallest prime factor of a no"<<endl;
    int no;
    cout<<"please enter a no"<<endl;
    cin>>no;

    int* arr= new int[no+1];
    //now we are setting all the elements smallest divisor as 1
    for(int i=2;i<=no;i++){
        arr[i]=1;
    }

    //now we are going to set the smallest prime no
    for(int i=2;i<=no;i++){
        if(arr[i]==1){
            arr[i]=i;
            // we are setting all the no
            for(int j=i*i;j<=no;j=j+i){
                if(arr[j]==1){
                    // it mean that the smallest prime factor is not updated earlier example 6 smallest is 2 not 3
                    arr[j]=i;
                }
            }
        }
    }

    for(int i=2;i<=no;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}