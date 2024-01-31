#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void bfs(int arr[][4], int visited[][4], int i, int j) {
    queue<pair<int, int>> q;
    visited[i][j] = true;
    q.push(make_pair(i, j));

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int x = -1; x <= 1; x++) {
            for (int y = -1; y <= 1; y++) {
                int nrow = row + x;
                int ncol = col + y;
                if (nrow >= 0 && nrow < 5 && ncol >= 0 && ncol < 4 && arr[nrow][ncol] == 1 && !visited[nrow][ncol]) {
                    visited[nrow][ncol] = true;
                    q.push(make_pair(nrow, ncol));
                }
            }
        }
    }
}

int noofilands(int arr[][4]) {
    int count = 0;
    int visited[5][4] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (visited[i][j] == true || arr[i][j] == 0) {
                // we need to skip
            } else {
                count++;
                bfs(arr, visited, i, j);
            }
        }
    }
    return count;
}

int main() {
    cout << "going to find out the no of the islands" << endl;
    int arr[5][4] = {
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 0, 1}
    };

    int ans = noofilands(arr);
    cout << "Number of islands: " << ans << endl;

    return 0;
}


//space and the time complexity of the given problem is n2
