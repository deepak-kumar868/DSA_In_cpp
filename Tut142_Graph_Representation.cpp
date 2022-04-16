#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"How many no. of node present in Graph";
    int n;
    cin>>n;

    cout<<"How many no. of edge present in Graph";
    int m;
    cin>>m;

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

   cout<<"Enter the edge:";
        for(int j=0;j<m;j++){
            int x,y;
            cin>>x>>y;
            arr[x-1][y-1]=1;
            arr[y-1][x-1]=1;
        }

    cout<<"Graph in the form of matrices:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

     vector<int> arr1[n+1];
     for(int i=0;i<m;i++){
         int a,b;
         cin>>a>>b;
         arr1[a].push_back(b);
         arr1[b].push_back(a);
     }

     for(int i=1;i<=n+1;i++){
         vector<int>::iterator it;
         cout<<i<<"->";
         for(it=arr1[i].begin();it!=arr1[i].end();it++){
             cout<<*it<<" ";
         }
         cout<<endl;
     }

}