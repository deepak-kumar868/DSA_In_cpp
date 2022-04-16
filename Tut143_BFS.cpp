#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter the no. of node in graph:";
    int n;
    cin>>n;

    cout<<"Enter the no. of edge node in graph:";
    int m;
    cin>>m;

    vector<int> arr[n+1];
    vector<bool> vis(n+1,false);

    cout<<"Enter the edge:";
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    cout<<"The BFS traversal of Graph is:"<<endl;

    queue<int> q;
    q.push(1);
    vis[1]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<endl;

        vector<int>:: iterator it;
        for(it=arr[node].begin();it!=arr[node].end();it++){
            if(!vis[*it]){
                vis[*it]=true;
                q.push(*it);
            }
        }


    }


}