#include<iostream>
using namespace std;

const int vertices = 5;

void addEdge(int arrMatrix[][vertices], int source, int destination) {
    arrMatrix[source][destination] = 1;
}

void printGraph(int arrMatrix[][vertices], int numVertices) {
    cout << "printing the array" << endl;
    for (int i = 0; i < numVertices; i++) {
        cout << i << "-> ";
        for (int j = 0; j < numVertices; j++) {
            if (arrMatrix[i][j] == 1) {
                cout << j << "->";
            }
        }
        cout << endl;
    }
}

int main() {
    cout << "going to implement the graph with the adjacency Matrix in C++" << endl;
    int arrMatrix[vertices][vertices] = {0};
    addEdge(arrMatrix, 0, 3);
    addEdge(arrMatrix, 0, 4);
    printGraph(arrMatrix, vertices);

    return 0;
}
