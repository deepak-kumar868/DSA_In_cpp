#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int currIndex){
    int largest=currIndex;
    int l=2*currIndex+1;
    int r=2*currIndex+2;

    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }

    if(largest!=currIndex){
        swap(arr[largest],arr[currIndex]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
   for(int i=n/2-1;i>=0;i--){
       heapify(arr,n,i);
   }

   for(int i=n-1;i>0;i--){
      swap(arr[0],arr[i]);
      heapify(arr,i,0);
   }
}

int main(){
   int arr[]={4,5,2,3,9,7,6,1};
   heapsort(arr,8);
   for(int i=0;i<8;i++){
       cout<<arr[i]<<" ";
   }
}