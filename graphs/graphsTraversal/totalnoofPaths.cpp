#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> addList[], int s, int d) {
    addList[s].push_back(d);
    addList[d].push_back(s);
}

void dfs(vector<int> addList[], int vertices, int curr, vector<bool>& visited, string ans) {
    visited[curr] = true;
    ans = ans + to_string(curr) + " "; // Append the current vertex to the path
    // now we are going to find out all the possible neighbors
    for (const auto& n : addList[curr]) {
        if (!visited[n]) {
            // then we will call it for the other elements
            if (n == 5) {
                ans+='5';
                // we need to print the string and make the current string again empty
                cout << ans << endl;
                break;
            }
            dfs(addList, vertices, n, visited, ans); // Pass 'n' instead of 'curr'
        }
    }
    visited[curr] = false; // Reset the visited flag for backtracking
}

void totalnoofPaths(vector<int> addList[], int vertices) {
    vector<bool> visited(vertices, false);
    string ans = "";
        dfs(addList, vertices, 0, visited, ans);
}

int main() {
    cout << "going to learn about the total no of paths in the tree traversals" << endl;
    vector<int> addList[7];
    addEdge(addList, 0, 1);
    addEdge(addList, 1, 3);
    addEdge(addList, 3, 4);
    addEdge(addList, 3, 5);
    addEdge(addList, 0, 2);
    addEdge(addList, 2, 4);
    addEdge(addList, 4, 5);
    addEdge(addList, 5, 6);

    totalnoofPaths(addList, 7);

    return 0;
}
