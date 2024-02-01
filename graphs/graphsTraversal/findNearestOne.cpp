#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void wrottenOrange(int arr[][3], int ans[][3]) {
    queue<pair<pair<int, int>, int>> q;
    int visited[3][3] = {0};

    // finding the starting nodes, i.e., all the ones
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 1) {
                q.push({{i, j}, 0});
                visited[i][j] = 1;
            }
        }
    }

    int rown[] = {-1, 0, 0, 1};
    int coln[] = {0, 1, -1, 0};

    while (!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int time = q.front().second;
        q.pop();

        ans[row][col] = time;

        for (int i = 0; i < 4; i++) {
            int nrow = row + rown[i];
            int ncol = col + coln[i];

            // Modified conditions here
            if (nrow >= 0 && nrow < 3 && ncol >= 0 && ncol < 3 && !visited[nrow][ncol]) {
                q.push({{nrow, ncol}, time + 1});
                visited[nrow][ncol] = 1;
            }
        }
    }
}

int main() {
    cout << "finding the rotten oranges time it will take" << endl;
    int arr[3][3] = {{1, 0, 1}, {1, 1, 0}, {1, 0, 0}};
    int ans[3][3] = {0};
    wrottenOrange(arr, ans);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

