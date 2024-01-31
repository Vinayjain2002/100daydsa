#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addEdge(vector<int> addList[], int s, int d) {
    addList[s].push_back(d);
    addList[d].push_back(s);
}

void bfs(vector<int> addList[], int startVertex, vector<bool>& visited) {
    queue<int> qu;

    qu.push(startVertex);
    visited[startVertex] = true;

    while (!qu.empty()) {
        int currentVertex = qu.front();
        cout << currentVertex << " ";
        qu.pop();

        for (const auto& neighbor : addList[currentVertex]) {
            if (!visited[neighbor]) {
                qu.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void bfsTraversal(vector<int> addList[], int vertices) {
    vector<bool> visited(vertices, false);

    cout << "Breadth-First Search Traversal:" << endl;
    for (int i = 0; i < vertices; ++i) {
        if (!visited[i]) {
            bfs(addList, i, visited);
        }
    }
    cout << endl;
}

int main() {
    cout << "Breadth-First Search (BFS) in C++" << endl;

    const int vertices = 7; // Number of vertices
    vector<int> addList[vertices];

    addEdge(addList, 0, 1);
    addEdge(addList, 0, 2);
    addEdge(addList, 1, 3);
    addEdge(addList, 2, 4);
    addEdge(addList, 3, 5);
    addEdge(addList, 4, 5);
    addEdge(addList, 5, 6);

    bfsTraversal(addList, vertices);

    return 0;
}

