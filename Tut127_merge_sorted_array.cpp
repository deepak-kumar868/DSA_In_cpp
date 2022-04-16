#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>> heap;
    cout<<"Enter the size of first array:";
    int n1;
    cin>>n1;
    int arr1[n1];
    cout<<endl;

    cout<<"Enter the element of first array:";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        heap.push(arr1[i]);
    }
    cout<<endl;

    cout<<"Enter the size of second array:";
    int n2;
    cin>>n2;
    int arr2[n2];
    cout<<endl;

    cout<<"Enter the element of socond array:";
    for(int j=0;j<n2;j++){
        cin>>arr2[j];
        heap.push(arr2[j]);
    }

    cout<<"Enter the size of third array:";
    int n3;
    cin>>n3;
    int arr3[n3];
    cout<<endl;

    cout<<"Enter the element of third array:";
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
        heap.push(arr3[i]);
    }

    while (!heap.empty())
    {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    
}