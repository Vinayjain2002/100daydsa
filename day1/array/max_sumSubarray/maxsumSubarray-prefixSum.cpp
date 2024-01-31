#include<iostream>
#include<limits>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int max_sum = -9999; 
    int arr[] = {1, -2, -6, -1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // we are going to implement it using the prefix sum 
    int* prefix_sum = new int[size];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        // we are calculating the prefix sum
        sum = sum + arr[i];
        prefix_sum[i] = sum;
    }

    // now finding the sum of all the possible subarrays
    int maxsum = INT_MIN;

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int prev;

            if (i == 0) {
                prev = 0;
            } else {
                prev = prefix_sum[i - 1];
            }

            if (prefix_sum[j] - prev > maxsum) {
                maxsum = prefix_sum[j] - prev;
            }
        }
    }

    cout << "the value of the max sum is " << maxsum << endl;
}
