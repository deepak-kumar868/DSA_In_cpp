#include<bits/stdc++.h>
using namespace std;

const int N=10e5+2;
int dp[N];
int minsquare(int n){
   dp[0]=0;
   dp[1]=1;
   dp[2]=2;
   dp[3]=3;

   if(dp[n]!=INT_MAX){
       return dp[n];
   }

   for(int i=1;i*i<=n;i++){
       dp[n]=min(dp[n],1+minsquare(n-i*i));
   }
   return dp[n];

}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<N;i++){
        dp[i]=INT_MAX;
    }

    cout<<minsquare(n);
}