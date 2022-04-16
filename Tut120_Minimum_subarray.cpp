#include<bits/stdc++.h>
using namespace std;

int smallestsubarraywithsum(int arr[],int n,int x){
    int sum=0,minlength=n+1,start=0,end=0;
    while(end<n){
        while(sum<=x && end<n){
            sum+=arr[end];
            end++;
        }
        while(sum>x && start<end){
            if(minlength>end-start){
                minlength=end-start;
            }
            sum-=arr[start];
            start++;
        }
    }
    return minlength;

}

int main(){
   int arr[]={1,4,45,6,10,19};
   int x=51;
   int n=6;

   int ans=smallestsubarraywithsum(arr,n,x);
   if(ans==n+1){
       cout<<"No such subarray is present"<<endl;
   }
   else{
       cout<<"Minimum subarray length is:"<<ans;
   }
}