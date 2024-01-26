#include<iostream>
using namespace std;

int main() {
    //going to implement
    int no;
    cout << "enter a no" << endl;
    cin >> no;

    int arr[no + 1]; // Adjusted the array size to accommodate the numbers from 0 to no
    cout << "setting the elements to 1 ie all the no are prime no" << endl;
    
    for (int i = 2; i <= no; i++) {
        arr[i] = 1; // Corrected the index to 'i'
    }

    for (int i = 2; i * i <= no; i++) {
        if (arr[i] == 1) {
            // we will mark all the no that are multiples of the given no as non prime
            for (int j = i * i; j <= no; j = j + i) {
                arr[j] = 0;
            }
        }
    }

    // so we had marked all the no
    cout << "Prime numbers up to " << no << ": ";
    for (int i = 2; i <= no; i++) {
        if (arr[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "printed" << endl;

    return 0;
}
