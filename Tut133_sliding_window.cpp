#include<bits/stdc++.h>
using namespace std;

int minsum(int arr[],int k,int n){
    int ans=INT_MAX;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    ans=min(ans,sum);

    for(int i=k;i<n;i++){
        sum+=arr[i];
        sum-=arr[i-k];
        ans=min(ans,sum);
    }
    return ans;
}

int main(){
   int arr[]={-2,10,1,3,2,-1,4,5};
   int k=3;
   int n=8;
   cout<<minsum(arr,k,n);
}