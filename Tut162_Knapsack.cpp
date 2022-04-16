#include<bits/stdc++.h>
using namespace std;

const int N=1e3+2;
int dp[N][N];
    vector<int> w(N);
    vector<int> val(N);

int Knapsack(int n,int cap){
    if(n<=0){
        return 0;
    }
    if(cap<=0){
        return 0;
    }

    if(dp[n][cap]!=-1){
        return dp[n][cap];
    }

    if(cap<w[n-1]){
        dp[n][cap]=Knapsack(n-1,cap);
    }
    else{
        dp[n][cap]=max(Knapsack(n-1,cap),Knapsack(n-1,cap-w[n-1])+val[n-1]);
    }
    return dp[n][cap];
}

int main(){

   for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
           dp[i][j]=-1;
       }
   }

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>w[i];
    }


    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    int cap;
    cin>>cap;
    cout<<Knapsack(n,cap);
}