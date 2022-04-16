#include<bits/stdc++.h>
using namespace std;

bool isfeasible(int arr[],int mid,int k,int n){
     int element=1;
     int pos=arr[0];

     for(int i=1;i<n;i++){
         if(arr[i]-pos>=mid){
             element++;
             pos=arr[i];
         }
         if(element==k){
             return true;
         }
     }
     return false;
}

int min_max(int arr[],int k,int n){
   int start=1;
   int end=arr[n-1];
   int res=-1;
   sort(arr,arr+n);
   while (start<end)
   {
       int mid=(start+end)/2;
       if(isfeasible(arr,mid,k,n)){
           start=mid+1;
           res=max(res,mid);
       }else{
           end=mid;
       }
   } 
   return res;
}

int main(){
     int arr[]={6,3,8,7,9,12,34,23};
     int k=3;
     int n=8;
     cout<<min_max(arr,k,n);
}