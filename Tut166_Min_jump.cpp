#include<bits/stdc++.h>
using namespace std;

int Minjump(int arr[],int n){
    int *jump=new int[n];
    
    if(n==0 || arr[0]==0){
        return 0;
    }

    jump[0]=0;

    for(int i=1;i<n;i++){
        jump[i]=INT_MAX;
        for(int j=0;j<i;j++){
            if(i<=j+arr[j] && jump[j]!=INT_MAX){
                jump[i]=min(jump[i],jump[j]+1);
                break;
            }
        }
    }
    return jump[n-1];
}

int main(){
    int arr[]={1,3,6,1,0,9};
    int size=sizeof(arr)/sizeof(int);
    cout<<Minjump(arr,size);
    return 0;
}