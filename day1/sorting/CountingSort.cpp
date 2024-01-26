#include<iostream>
#include<limits>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "going to implement the counting sort" << endl;
    int arr[] = {0, 2, 5, 0, 4, 0, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // finding the maxElement of the array
    int largest = INT_MIN;
    for(int i = 0; i < size; i++){
        largest = max(largest, arr[i]);
    }

    int* freq = new int[largest + 1]();  // Initialize the array to 0

    // storing the freq of the elements
    for(int i = 0; i < size; i++){
        freq[arr[i]]++;
    }

    // so we had stored the freq of the elements
    int index = 0;
    for(int i = 0; i <= largest; i++){
        int count = freq[i];
        while(count--){
            arr[index] = i;
            index++;
        }
    }

    // so we had sorted the array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // printing the largest element
    cout<<"the largest element in the array is"<<endl;
    cout<<largest<<endl;
    // Don't forget to delete the dynamically allocated array
    delete[] freq;

    return 0;
}
