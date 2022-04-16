#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>> maxheap;
priority_queue<int,vector<int>,greater<int>> minheap;

int findMedian(){
    if((maxheap.size()==minheap.size())){
        return (maxheap.top()+minheap.top())/2;
    }
    else{
        return (maxheap.top());
    }
}

void insert(int num){
    if(maxheap.size()==0 && minheap.size()==0){
        maxheap.push(num);
        return;
    }
    else if(maxheap.size()==minheap.size()){
        maxheap.push(num);
    }
    else if(maxheap.size()!=minheap.size()){
        if(num<maxheap.top()){
            maxheap.push(num);
        }else{
            minheap.push(num);
        }
        if(maxheap.size()!=minheap.size()){
            if(maxheap.size()>minheap.size()){
                minheap.push(maxheap.top());
                maxheap.pop();
            }
            else{
                maxheap.push(minheap.top());
                minheap.pop();
            }
        }
    }
}

int main(){
    insert(10);
    insert(12);
    insert(8);
    cout<<findMedian();
}