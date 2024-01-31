#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void addEdge(vector<int>addList[],int s,int d){
    addList[s].push_back(d);
    addList[d].push_back(s);
}

void dfsUtil(vector<int>addList[],int curr,vector<bool> &visited){
 // here we will first print the element
 cout<<curr<<endl;
 visited[curr]=true;
 // now we will find the neighbours of the element  and run the dfsUtils for those
 for(const auto& n: addList[curr]){
    if(!visited[n]){
        // then we will call it for the other elements
        dfsUtil(addList,n,visited);
    }
 }   
}

void dfs(vector<int>addList[],int vertices){
    vector<bool>visited(vertices,false);
     cout << "Depth-First Search Traversal:" << endl;
    for (int i = 0; i < vertices; ++i) {
        if (!visited[i]) {
            dfsUtil(addList, i, visited);
        }
    }
    cout << endl;
}

int main(){
    cout<<"going to learn abt the bfs"<<endl;
    const int vertices=7;
    vector<int>addList[vertices];
    addEdge(addList, 0, 1);
    addEdge(addList, 0, 2);
    addEdge(addList, 1, 3);
    addEdge(addList, 2, 4);
    addEdge(addList, 3, 5);
    addEdge(addList, 4, 5);
    addEdge(addList, 5, 6);
    dfs(addList,vertices);
    
}