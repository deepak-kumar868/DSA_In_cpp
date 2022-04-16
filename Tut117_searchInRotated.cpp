 #include<bits/stdc++.h>
 using namespace std;

 int searchInRotated(int arr[],int key,int start,int end){

     if(start>end){
         return -1;
     }
     int mid=(start+end)/2;

     if(arr[mid]==key){
         return mid;
     }

     if(arr[mid]>=arr[start]){
         if(key>=arr[start] && key<=arr[mid]){
             return searchInRotated(arr,key,start,mid-1);
         }
         return searchInRotated(arr,key,mid+1,end);
     }
    if(key<=arr[end] && key>=arr[mid]){
        return searchInRotated(arr,key,mid+1,end);
    }
    return searchInRotated(arr,key,start,mid-1);
 }

 int main(){
    int arr[]={6,7,8,9,10,1,2,5};
    int key=8;
    cout<<searchInRotated(arr,key,0,7);
 }
