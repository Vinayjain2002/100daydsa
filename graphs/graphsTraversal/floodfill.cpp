#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void floodfill(int arr[][3], int startingX, int startingY) {
    int visited[3][3] = {0};
    queue<pair<int, int>> q;

    q.push(make_pair(startingX, startingY));
    visited[startingX][startingY] = true;

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        arr[row][col] = 2;
        q.pop();

        if (row - 1 >= 0 && row + 1 <= 2 && col - 1 >= 0 && col + 1 <= 2) {
            if (arr[row - 1][col] == 1) {
                q.push(make_pair(row - 1, col));
                visited[row-1][col]=true;
            }
            if (arr[row + 1][col] == 1&& visited[row+1][col]==0) {
                q.push(make_pair(row + 1, col));
                visited[row+1][col]=true;
            }
            if (arr[row][col - 1] == 1 && visited[row][col-1]==0) {
                q.push(make_pair(row, col - 1));
                visited[row][col-1]=1;
            }
            if (arr[row][col + 1] == 1&& visited[row][col+1]==0) {
                q.push(make_pair(row, col + 1));
                visited[row][col+1]=1;
            }
        }
    }
}

int main() {
    cout << "going to implement the floodfill algorithm" << endl;

    int arr[3][3] = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    floodfill(arr, 1, 1);

    cout << "printing the array" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
