#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void addEdge(vector<int>addList[], int s, int d){
    addList[s].push_back(d);
    addList[d].push_back(s);
}

bool bipartite(vector<int> arrList[], int vertices){
    vector<int> visited(vertices, -1);
    queue<pair<int,int>> q;

    // now we are going for the start
    int start = 0;
    q.push({start, 0});
    visited[start] = 0;

    while(!q.empty()){
        // we will also check the color of the previous one
        int curr = q.front().first;
        int color = q.front().second;
        q.pop();
        // finding neighbours
        for(const auto& n: arrList[curr]){
            int newColor;
            if(visited[n] == -1){
                if(color == 0){
                    newColor = 1;
                }
                else{
                    newColor = 0;
                }
                q.push({n, newColor});
                visited[n] = newColor;
                cout<<"new color"<<endl;
            }
            else{
                // means that already visited
                if(visited[n] == visited[curr]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    vector<int> arrList[9];
    addEdge(arrList, 0, 1);
    addEdge(arrList, 1, 2);
    addEdge(arrList, 2, 3);
    addEdge(arrList, 3, 4);
    addEdge(arrList, 4, 7);
    addEdge(arrList, 7, 8);
    addEdge(arrList, 4, 5);
    addEdge(arrList, 6, 5);
    addEdge(arrList, 2, 6);

    bool ans = bipartite(arrList, 9);
    cout << ans << endl;

    return 0;
}
