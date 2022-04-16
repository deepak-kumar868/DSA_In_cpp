#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of activity:";
    cin>>n;
    int arr[n];
    int arr1[n];

    cout<<"Enter the starting time of all activity:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the ending time of all activity:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back(make_pair(arr1[i],arr[i]));
    }
    sort(vec.begin(),vec.end());

    int j=0;
    int count=1;
    cout<<"These activity can do:"<<endl;
    cout<<vec[0].second<<" "<<vec[0].first<<endl;
    for(int i=1;i<n;i++){
        if(vec[j].first<vec[i].second){
            cout<<vec[i].second<<" "<<vec[i].first<<endl;
            count++;
            j++;
        }
    }
    cout<<"The no. of activity which can select:"<<count<<endl;
}