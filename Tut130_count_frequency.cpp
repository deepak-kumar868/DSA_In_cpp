#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    unordered_map<int,int>::iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}