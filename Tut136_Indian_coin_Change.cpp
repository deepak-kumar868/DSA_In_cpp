#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Enter the value you have to change:";
  int x;
  cin>>x;
  cout<<"How many type of money eligible:";
  int n;
  cin>>n;
  int arr[n];

  cout<<"Enter the value of all money:";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  sort(arr,arr+n,greater<int>());
  int ans=0;
  for(int i=0;i<n;i++){
     ans+=x/arr[i];
     x-=(x/arr[i])*arr[i];
  }

  cout<<ans;
}