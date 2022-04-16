#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"Enter the size of array:";
   cin>>n;
   int arr[n];
   priority_queue<int,vector<int>,greater<int>> minheap;
   cout<<"Enter the value of array:";
    for(int i=0;i<n;i++){
       cin>>arr[i];
       minheap.push(arr[i]);
    }

    int ans=0;
    while(minheap.size()>1){
        int x=minheap.top();
        minheap.pop();
        int y=minheap.top();
        minheap.pop();
        
        ans+=x+y;
        minheap.push(x+y);
    }
    cout<<ans;

} 