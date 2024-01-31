#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void addEdges(vector<int>arrayList[],int source, int destination){
    arrayList[source].push_back(destination);

    // if the graph is a undirected graph then we will also do
    arrayList[destination].push_back(source);
}
void printGraph(vector<int>arrayList[],int vertices){
    for(int i=0;i<vertices;i++){
        cout<<i<<"->";
        for(int j=0;j<arrayList[i].size();j++){
            cout<<arrayList[i][j]<<"->";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"going to learn abt the how to create a adjancy list in the c++"<<endl;
    int vertices=4;
    vector<int>arrayList[4];

    // going the add the elements in the arrayList
    addEdges(arrayList,0,2);
    addEdges(arrayList,1,3);
    addEdges(arrayList,1,2);
    addEdges(arrayList,2,3);
    cout<<"going to print the graph"<<endl;
    //going to print the adjancy List in the c++
    printGraph(arrayList,vertices);
}