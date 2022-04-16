#include<bits/stdc++.h>
using namespace std;

const int N=1e3+2;
int dp[N][N];
int coinchange(vector<int> &coin,int n,int x){

    if(x==0){
        return 1;
    }

    if(x<0){
        return 0;
    }
    if(n<=0){
        return 0;
    }

    if(dp[n][x]!=-1){
        return dp[n][x];
    }

    dp[n][x]=coinchange(coin,n,x-coin[n-1])+coinchange(coin,n-1,x);
    return dp[n][x];
}

int main(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    int n;
    cout<<"Enter the no. type of coin available:"<<endl;
    cin>>n;

    cout<<"Enter the value of all coin:"<<endl;
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    cout<<"Enter the amount you needed"<<endl;
    int x;
    cin>>x;

    cout<<"The no. of ways to make this amount is:"<<endl;
    cout<<coinchange(coin,n,x);


}