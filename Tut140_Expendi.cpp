#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the initial amount of fuel in vehicle:";
    int p;
    cin>>p;
    cout<<"Enter the distance between vehicle and city stopage:";
    int l;
    cin>>l;
    int n;
    cout<<"How many number of stopage present in journey:";
    cin>>n;

    int stop[n];
    int dis=7877887;
    cout<<"Enter the distance between stopage and city";
    for(int i=0;i<n;i++){
        cin>>stop[i];
        if(stop[i]<dis){
            dis=min(dis,stop[i]);
        }
        stop[i]=l-stop[i];
    }
    for(int i=1;i<n;i++){
        stop[i]=stop[i]-stop[i-1];
    }

    int fuel[n];
    cout<<"Enter the amount of fuel available in each stopage:";
    for(int i=0;i<n;i++){
        cin>>fuel[i];
    }
    int count=0;

    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
       vec.push_back(make_pair(stop[i],fuel[i]));
    }
    sort(vec.begin(),vec.end());

    for(int i=0;i<n-1;i++){
        if(p<vec[i].first){
            cout<<"Vehicle never reach the city";
            break;
        }
        else{
            p-=vec[i].first;
            if(p<vec[i+1].first){
                p+=vec[i].second;
                count++;
            }
        }
    }

    if(p<dis){
        p+=vec[n-1].second;
        if(p<dis){
            cout<<"Vehicle never reach the city";

        }
        count++;
    }

    cout<<count;
}