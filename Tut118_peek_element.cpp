#include<bits/stdc++.h>
using namespace std;

int peekelement(int arr[],int start,int end){
    
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if((mid==0||arr[mid]>arr[mid-1]) && (mid==end || arr[mid]>arr[mid+1])){
        return mid;
    }
    else if(mid>=0 && arr[mid]<arr[mid-1]){
        return peekelement(arr,start,mid-1);
    }
    else{
        return peekelement(arr,mid+1,end);
    }
}

int main(){
   int arr[]={0,6,8,5,7,9};
   int n=6;
   int ans=peekelement(arr,0,n-1);
   if(ans==-1){
       cout<<"There is no peek element"<<endl;
   }
   else{
       cout<<"The peek element is:"<<ans<<endl;
   }
}