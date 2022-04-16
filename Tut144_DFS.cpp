#include<bits/stdc++.h>
using namespace std;

#define N 9999999

vector<int> arr[N];
vector<bool> vis(N);

void dfs(int node){
     vis[node]=true;
     //preorder
    //  cout<<node<<" ";

     vector<int>:: iterator it;
     for(it=arr[node].begin();it!=arr[node].end();it++){
         if(vis[*it]==false){
             dfs(*it);
         }
     }

     //postorder
     cout<<node<<" ";
}

int main(){

    cout<<"Enter the no. of node in graph:";
    int n;
    cin>>n;

    cout<<"Enter the no. of edge node in graph:";
    int m;
    cin>>m;


    cout<<"Enter the edge:";
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    cout<<"The BFS traversal of Graph is:"<<endl;

    dfs(1);

}