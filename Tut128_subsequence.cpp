#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>> heap;
    int arr[]={5,7,2,3,9};
    int k=20;
    for (int i = 0; i <5; i++)
    {
        heap.push(arr[i]);
    }

    int ans=0;
    int count=0;
    while (ans<k)
    {
        ans+=heap.top();
        heap.pop();
        count++;
    }
    cout<<"Minimum number of element in subsequence is:"<<count<<endl;
    
    
}