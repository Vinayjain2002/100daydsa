#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int wrottenOrange(int arr[][3]){
    queue<pair<pair<int,int>,int>>q;
    int visited[3][3]={0};
    // so we had created the visited array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==2){
                // so that one is wrotten
                q.push({{i,j},0});
                visited[i][j]=1;
            }
        }
    }
    // so we had find out the starting point of our algorithm
    int time=0;
    int drow[]={-1,0,-1,0};
    int dcol[]={0,1,0,-1};
    while(!q.empty()){
        // we will find out the all the neighbours of the element and update the time by 1
        int row=q.front().first.first;
        int col=q.front().first.second;
        int t=q.front().second;
        q.pop();
        time=max(time,t);
        // now we are going to find out the neighbouring element

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                int nrow=row+drow[i];
                int rcol=col+dcol[i];

                if(nrow>=0 && nrow<3 && rcol>=0 && rcol<3 && !visited[nrow][rcol] && arr[nrow][rcol]==1){
                    q.push({{nrow,rcol},t+1});
                    visited[nrow][rcol]=1;
                }
            }
        }

    }
    return time;
}
int main(){
    cout<<"finding the wrotten oranges time it will take"<<endl;
    int arr[3][3]={{0,1,2},{0,1,1},{2,1,1}};
    int ans=wrottenOrange(arr);
    cout<<ans<<endl;

}