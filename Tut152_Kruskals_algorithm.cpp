#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle=false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i] && iscycle(i,adj,visited,-1)){
            cycle=true;
        }
        if(cycle==true){
            cout<<"Cycle is present"<<endl;
        }
        else{
            cout<<"Cycle is not present"<<endl;
        }
    }
}