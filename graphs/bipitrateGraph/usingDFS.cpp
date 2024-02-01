#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>addList[], int s, int d){
    addList[s].push_back(d);
    addList[d].push_back(s);
}
bool bipitrate(vector<int>addList[],vector<int> &visited,int curr,int color){
    for(const auto& n: addList[curr]){
        if(color==0){
            color=1;
            visited[curr]=1;
        }
        else{
            color=0;
            visited[curr]=0;
        }
        // finding the neighbours
        for(const auto&n: addList[curr]){
            if(visited[n]==-1){
                if(!  bipitrate(addList,visited,n,color)){
                    return false;
                }
            }
            else if(visited[n]==visited[curr]){
                return false;
            }
        }
    }
    return true;
}

bool dfs(vector<int>addList[],int vertices){
    vector<int>visited(vertices,-1);
    int start=0;
    bool ans=bipitrate(addList,visited,0,-1);
    return ans;
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

    cout<<"going to find out the graph is bipitrate or not using the dfs"<<endl;

    bool ans=dfs(arrList,9);
    cout<<ans<<endl;
    
}