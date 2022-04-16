#include<bits/stdc++.h>
using namespace std;

int pageAllocation(int arr[],int m,int n){

    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0,end=sum,ans=INT_MAX;

    while (start<=end)
    {
        int mid=(start+end)/2;
    }
    
}

int main(){

}