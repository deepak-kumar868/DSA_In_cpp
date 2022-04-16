#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(int arr[],int k,int n,int x){
    if(k>n){
        return -1;
    }
    int ans=INT_MAX;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x){
        ans=sum;
    }

    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];
        
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    return ans;
}

int main(){
    int arr[]={7,5,4,6,8,9};
    int k=3;
    int x=20;
    int n=6;
   cout<<maxSumSubarray(arr,3,6,20);
}