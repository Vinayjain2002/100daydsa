#include<iostream>
#include<vector>
using namespace std;

void dfs(int arr[5][4], int visited[5][4], int row, int col) {
    visited[row][col] = 1;
    int delRow[] = {-1, 0, 0, 1};
    int delCol[] = {0, 1, -1, 0};

    for (int i = 0; i < 4; i++) {
        int nrow = row + delRow[i];
        int ncol = col + delCol[i];

        if (nrow >= 0 && ncol >= 0 && nrow < 5 && ncol < 4 && !visited[nrow][ncol]) {
            if (arr[nrow][ncol] == 1) {
                dfs(arr, visited, nrow, ncol);
            }
        }
    }
}

int main() {
    cout << "Finding the number of caves with '1' where you cannot get outside from." << endl;
    int arr[5][4] = {{0, 0, 0, 1}, {0, 1, 1, 0}, {0, 0, 1, 1}, {0, 0, 0, 1}, {0, 1, 1, 0}};
    int visited[5][4] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i == 0 || i == 4 || j == 0 || j == 3) && arr[i][j] == 1 && !visited[i][j]) {
                dfs(arr, visited, i, j);
            }
        }
    }

    // counting the number of caves where you cannot get outside from
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == 1 && visited[i][j] == 0) {
                count++;
            }
        }
    }

    cout << "Total number of caves with '1' where you cannot get outside from: " << count << endl;

    return 0;
}
