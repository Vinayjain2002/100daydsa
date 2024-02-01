#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void addEdge(vector<int> addList[], int s, int d) {
    addList[s].push_back(d);
    addList[d].push_back(s);
}

bool dfsUtil(vector<int> addList[], vector<bool>& visited, int start, int curr, int parent) {
    visited[curr] = true;
    for (const auto& n : addList[curr]) {
        if (!visited[n]) {
            if (dfsUtil(addList, visited, start, n, curr)) {
                return true;
            }
        } else {
            if (start == n && parent != start) {
                return true;
            }
        }
    }
    return false;
}

bool dfs(vector<int> addList[], int vertices) {
    for (int i = 0; i < vertices; ++i) {
        vector<bool> visited(vertices, false);
        if (dfsUtil(addList, visited, 0, 0, -1)) {
            return true;
        }
    }
    return false;
}

int main() {
    cout << "we are going to implement the cycle detection using dfs" << endl;
    const int vertices = 7;
    vector<int> addList[vertices];
    addEdge(addList, 0, 1);
    addEdge(addList, 0, 2);
    addEdge(addList, 1, 4);
    addEdge(addList, 2, 3);
    addEdge(addList, 2, 5);
    addEdge(addList, 4, 6);
    addEdge(addList, 5, 6);

    bool ans = dfs(addList, vertices);
    cout << ans << endl;

    return 0;
}
