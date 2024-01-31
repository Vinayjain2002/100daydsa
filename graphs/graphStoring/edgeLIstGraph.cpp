#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,int>> & addList,int s,int d){
    addList.push_back(make_pair(s,d));
}

void printGraph(vector<pair<int,int>>& addList){
    for(const auto&edge: addList){
        // we are going to print the elements
        cout<<edge.first<<" -> "<<edge.second<<", ";
    }
    cout<<"printed"<<endl;
}
int main(){

    cout<<"going to store the graph in the form of the edge List in the c++"<<endl;
    vector<pair<int,int>>addList;
    addEdge(addList,0,2);
    addEdge(addList,1,2);
    addEdge(addList,1,3);
    addEdge(addList,2,3);
    // going to store the graph in the form of a edgeList 
    printGraph(addList);
}