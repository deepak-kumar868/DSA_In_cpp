#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    // m[2]=3;
    // cout<<m[2];

    m.insert(pair<int,int>(1,11));
    m.insert(pair<int,int>(2,22));
    m.insert(pair<int,int>(3,33));
    cout<<m[1]<<endl;

    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<":"<<itr->second<<endl;
    }
}