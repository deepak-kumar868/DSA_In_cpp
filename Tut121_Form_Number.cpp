#include<bits/stdc++.h>
using namespace std;

void DivisibleBy3(int arr[],int n,int k){
    int sum=0;
    bool found=false;
    int l,r;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum%3==0){
        found=true;
        l=0;
        r=k-1;
    }

    for(int i=k;i<n;i++){
        if(found==true){
            break;
        }
        sum-=arr[i-k];
        sum+=arr[i];

        if(sum%3==0){
            found=true;
            l=i-k+1;
            r=i;
        }
    }

    for(int i=l;i<=r;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   int arr[]={84,23,45,12,56,82};
   int k=3;
   int n=6;

   DivisibleBy3(arr,n,k);
}