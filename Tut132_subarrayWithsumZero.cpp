#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the size of array:";
    int n,k;
    cin>>n;
    int arr[n];
    int prefsum=0;
    int ans=0;
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    map<int,int> m;
    for(int i=0;i<n;i++){
        prefsum+=arr[i];
        m[prefsum]++;
    }

    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        int c=it->second;
        ans+=(c*(c-1))/2;

        if(it->first==0){
            ans+=it->second;
        }
    }

    cout<<ans;
}