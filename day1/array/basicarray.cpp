#include<iostream>
using namespace std;

int main(){
    // basic array
    int arr[20];

    //getting the size of the array
    int size=sizeof(arr)/sizeof(arr[0]);

    //creating a dynamic array
    int* arr= new int[30];
    //deleting the array
    delete[] arr;
    
}