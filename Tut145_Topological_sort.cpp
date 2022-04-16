#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter the no. of node in graph:";
    int n;
    cin>>n;

    cout<<"Enter the no. of edge node in graph:";
    int m;
    cin>>m;

    vector<int> arr[n];
vector<int> indegree(n,0);

    cout<<"Enter the edge:";
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        indegree[y]++;
    }

    cout<<"The Topological sort of this Graph is:"<<endl;

    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
        while(!q.empty()){
            int p=q.front();
            q.pop();
            cout<<p<<" ";

            for(auto it:arr[p]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
}