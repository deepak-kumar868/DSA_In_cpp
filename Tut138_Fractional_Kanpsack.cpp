#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of item:";
    cin>>n;
    int value[n];
    int weight[n];
    cout<<"Enter the value of all item:";
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    cout<<"Enter the weight of all  item:";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    int cap;
    cout<<"Enter the capacity of bag:";
    cin>>cap;

    vector<pair<float,pair<int,int>>> vec;
    for(int i=0;i<n;i++){
        vec.push_back(make_pair((value[i]/weight[i]),make_pair(weight[i],value[i])));
    }
    sort(vec.begin(),vec.end());

   int ans=0;
    for(int i=n-1;i>=0;i--){
        cap-=vec[i].second.first;
        ans+=vec[i].second.second;

        if(cap<0){
            ans=ans-(abs(cap))*((vec[i].first));
            cout<<ans;
            break;
        }
        if(cap==0){
            cout<<ans;
            break;
        }
    }

}