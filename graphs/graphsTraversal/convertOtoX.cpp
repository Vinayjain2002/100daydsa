#include<iostream>
#include<queue>
using namespace std;

void bfs(int arr[][4]){
    queue<pair<int,int>> q;
    int visited[5][4]={0};

    // Start searching for the binary zero elements
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            // Adjusted the conditions based on the problem description
            if(i != 0 && i != 4 && j != 0 && j != 3){
                continue;
            }
            else{
                if(arr[i][j] == 0){
                    q.push({i, j});
                    visited[i][j] = 1;
                }
            }
        }
    }

    while (!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        int rown[] = {-1, 0, 1, 0};
        int coln[] = {0, 1, 0, -1};

        for(int i=0; i<4; i++){
            int nrow = row + rown[i];
            int ncol = col + coln[i];

            if(nrow >= 0 && ncol >= 0 && nrow < 5 && ncol < 4 && !visited[nrow][ncol]){
                if(arr[nrow][ncol] == 0){
                    q.push({nrow, ncol});
                    visited[nrow][ncol] = 1;
                }
            }
        }
    }

    // Update the array based on the visited elements
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            if(visited[i][j] == 0 && arr[i][j] == 0){
                arr[i][j] = 1;
            }
        }
    }
}

int main(){
    cout << "Implementing" << endl;
    int arr[5][4] = {{1, 1, 1, 1},{1, 0, 1, 1},{1, 0, 0, 1},{1, 0, 1, 1},{1, 1, 0, 0}};
    // Implement the BFS traversal
    bfs(arr);

    // Print the updated array
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
