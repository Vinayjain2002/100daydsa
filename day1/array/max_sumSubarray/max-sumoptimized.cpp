#include<iostream>
using namespace std;

int main() {
    cout << "going to find out the max sum of the subarray" << endl;
    int arr[] = {-1, -2, -6, -1, -3};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int max_sum = -999;
    int left = 0;
    int right = 0;

    while (right < size) {
        sum = sum + arr[right];
        if (sum > max_sum) {
            max_sum = sum;
        }
        if (sum < 0) {
            left = right + 1; // Update the left index after resetting sum
            sum = 0;
        }
        right++;
    }

    // If all elements are negative, set left and right to -1
    if (left == size) {
        left = -1;
        right = -1;
    }

    cout << "the max sum of the array is " << max_sum << endl;
    cout << "and the range is " << left + 1 << " " << right << endl;
}
