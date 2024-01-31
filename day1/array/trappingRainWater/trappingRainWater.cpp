#include<iostream>
using namespace std;

int main(){
    cout<<"going to find out the total rain water trapped between the walls"<<endl;
    int arr[]={4,2,0,6,3,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    // so we had find out the size of the array
    int* left_max= new int[size];
    int* right_max=new int[size];
    int max=-999;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        left_max[i]=max;
    }
    max=0;
    //similarly finding the right_max array
    for(int i=size-1;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
        }
        right_max[i]=max;
    }
    long long int total_trapped=0;
    // now finding the water trapped between the walls
    for(int i=0;i<size;i++){
        int max_height=min(left_max[i],right_max[i]);
        total_trapped=total_trapped+max_height-arr[i];
    }
    cout<<"the total water trapped between the walls is"<<endl;
    cout<<total_trapped<<endl;
}