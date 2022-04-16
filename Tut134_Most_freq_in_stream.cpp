#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={1,2,2,2,3,4};
    int k=2;

    map<int,int> freq;
    for (int i = 0; i < 6; i++)
    {
        if(k=freq.size() && freq[arr[i]==0]){
            break;
        }
        freq[arr[i]]++;
    }

    map<int,int>:: iterator it;
    vector<pair<int,int>> ans;
    for(it=freq.begin();it!=freq.end();it++){
        ans.push_back(it->second,it->first)
    }    

    sort(ans.begin(),ans.end() greater<pair>);

    pair<int,int>:: iterator it1;
    for(it1=ans.begin();it1!=ans.end();it++){
        cout<<it1->first<<" "<<it1->second<<endl;
    }
}