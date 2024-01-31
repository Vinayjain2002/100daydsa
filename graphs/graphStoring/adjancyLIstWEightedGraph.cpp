#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>>arrayList[],int source,int destination,int weight){
    arrayList[source].push_back(make_pair(destination,weight));
    // so we had created the pair 
}
void printGraph(vector<pair<int,int>>arrayList[],int vertices){
    cout<<"printing the graph"<<endl;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<arrayList[i].size();j++){
            cout<<i<<" vertices"<<arrayList[i][j].first<<" with weight "<<arrayList[i][j].second<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"going to implment the adjancy List for the weughted graph"<<endl;
    int vertices=4;

    cout<<"going to make the graph"<<endl;
    vector<pair<int,int>>arrayList[4];

    cout<<"going to insert the elements"<<endl;
    addEdge(arrayList,0,2,10);
    addEdge(arrayList,1,3,20);
    addEdge(arrayList,1,2,15);
    addEdge(arrayList,2,3,5);
    addEdge(arrayList,2,0,5);

    printGraph(arrayList,vertices);

}