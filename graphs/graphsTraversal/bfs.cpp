#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void addEdge(vector<int>addList[],int s,int d){
    addList[s].push_back(d);
    addList[d].push_back(s);
}

void bfs(vector<int>addList[],int vertices){
    queue<int>q;
    vector<bool>visited(vertices,false);
    int start=0;
    q.push(start);
    visited[start]=true;

    while(!q.empty()){
        int currVertex=q.front();
        cout<<currVertex<<endl;

        q.pop();
        //finding all the neighbours
        for(const auto& n: addList[currVertex]){
            if(!visited[n]){
                // we will push that element in the queue
                visited[n]=true;
                q.push(n);
            }
        }
    }
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

    bfs(addList,vertices);
}