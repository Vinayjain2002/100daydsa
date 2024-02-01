// going to find out the cycle in the graph 

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void addEdge(vector<int>addList[],int s,int d){
    addList[s].push_back(d);
    addList[d].push_back(s);
}
bool bfs(vector<int> addList[],int vetrices, vector<bool>& visited){
    // here we are going to define the code for the 
    queue<pair<int,int>>q;

    // so we had defined the queue
    int start=0;
    q.push(make_pair(start,-1));
    visited[start]=true;
    // here -1 is supposed to be the parent of the starting node
    while(!q.empty()){
        // we need to push the elements also
        int parent=q.front().second;
        int elem=q.front().first;
        q.pop();

        // now we are going to find out the neighbours of teh elements also
        for(const auto&n: addList[elem]){
            // so we are going to push the elements in the queue
            if(!visited[n]){
                //so we need to find out the element that is the neighbour
                visited[n]=true;
                q.push(make_pair(n,elem));
            }
            else if(parent!=n){
                // means that node is already visited by the other node
                return true;
            }
        }


    }
    return false;
}

bool bfsTraversal(vector<int>addList[],int vertices){
    vector<bool>visited(vertices, false);
    for(int i=0;i<vertices;i++){
        if(!visited[i]){
            // we need to call the bfs
            int ans=bfs(addList,vertices,visited);
            if(ans==1){
                return true;
            }
        }
    }
    return false;
}
int main(){
    cout<<"going to learn abt the bfs"<<endl;
    const int vertices=7;
    vector<int>addList[vertices];
    addEdge(addList, 0, 1);
    addEdge(addList, 0, 2);
    addEdge(addList, 1, 4);
    addEdge(addList, 2, 3);
    addEdge(addList, 2, 5);
    addEdge(addList, 4, 6);
    addEdge(addList, 5, 6);

   bool ans= bfsTraversal(addList,vertices);
   cout<<ans<<endl;
   if(ans==1){
    cout<<"there is a loop present inside the graph"<<endl;
   }
   else{
    cout<<"no loop is present"<<endl;
   }

}