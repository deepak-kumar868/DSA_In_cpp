#include<bits/stdc++.h>
using namespace std;

const int N=1e3+2;
int dp[N];

int func(vector<int> &a,int n){

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=1;

    for(int i=0;i<n;i++){
        if(a[n]>a[i]){
            dp[n]=max(1+func(a,i),dp[n]);
        }
    }
    return dp[n];
}

int main(){

   for(int i=0;i<N;i++){
       dp[i]=-1;
   }

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<func(a,n-1);
}