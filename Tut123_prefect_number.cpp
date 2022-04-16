#include<bits/stdc++.h>
using namespace std;

bool isperfect(int nums){
    int sum=0;
   for(int i=1;i<=nums/2;i++){
      if(nums%i==0){
          sum+=i;
      }
   }
   if(sum==nums){
       return true;
   }
   return false;
}

int prefectNumber(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        if(isperfect(arr[i])){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }

    int maxi=INT_MIN;
    int count=0;
    for(int i=0;i<k;i++){
        if(arr[i]==1){
            count++;
        }
    }

    maxi=max(maxi,count);

    for(int i=k;i<n;i++){
        if(arr[i]==1 && arr[i-k]==0){
            count++;
            maxi=max(maxi,count);
        }
        else if(arr[i]==0 && arr[i-k]==1){
            count--;
            maxi=max(maxi,count);
        }
    }

    return maxi;
}

int main(){
   int arr[]={28,2,3,6,496,99,8128,24};
   int k=4;
   int n=8;
   cout<<prefectNumber(arr,k,n);
}