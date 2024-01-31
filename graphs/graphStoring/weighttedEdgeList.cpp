#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
void addElement(vector<tuple<int,int,int>>& addList,int s,int d,int w){
    addList.push_back(make_tuple(s,d,w));
}

void printGraph(vector<tuple<int,int,int>>addList){
    cout<<"printing"<<endl;
    for(const auto&edge: addList){
        cout<<get<0>(edge)<<"->"<<get<1>(edge)<<" weight "<<get<2>(edge)<<" , ";
    }
    cout<<"printed"<<endl;

}
int main(){
    cout<<"going to store the Weighted Edge List"<<endl;
    vector<tuple<int,int,int>>addList;

    //storing the elements
    addElement(addList,0,2,1);
        addElement(addList,1,2,5);
            addElement(addList,1,3,0);
                addElement(addList,2,3,10);

printGraph(addList);

}