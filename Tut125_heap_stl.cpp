#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>> ma;
    ma.push(23);
    ma.push(43);
    ma.push(67);
    ma.push(7);
    cout<<ma.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> mi;
    mi.push(23);
    mi.push(43);
    mi.push(67);
    mi.push(7);
    cout<<mi.top()<<endl;

}