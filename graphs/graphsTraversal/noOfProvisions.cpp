// ie the no of the different subgraphs that are possible.

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void dfsUtil(vector<int>arrList[],int s,vector<bool>& visit){
    //applying the logic of the dfs
    visit[s]=true;

    // finding all the neighbours of the element
    for(const auto& n: arrList[s]){
        if(!visit[n]){
            dfsUtil(arrList,n,visit);
        }
    }
}

int  dfs(vector<int>arrList[],int vertices){
    int count=0;
        vector<bool>visit(vertices,false);
        for(int i=0;i<vertices;i++){
            if(visit[i]==0){
                count=count+1;
            dfsUtil(arrList,i,visit); 
            }
        }

        return count;
}

void addElem(vector<int>arrList[],int s,int e){
    arrList[s].push_back(e);
    arrList[e].push_back(s);
    // so we had created a vector
}
int main(){
    const int vertices=9;
    vector<int>arrList[vertices];
    cout<<"going to find out the no of the provisions"<<endl;
    addElem(arrList,1,2);
       addElem(arrList,2,3);
    addElem(arrList,4,5);
    addElem(arrList,5,6);
    addElem(arrList,7,8);

    int ans=dfs(arrList,vertices);
    cout<<ans<<endl;

}

// here the time complexity of this is o(n+2E)
