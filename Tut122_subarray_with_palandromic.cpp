#include<bits/stdc++.h>
using namespace std;

bool ispalandrome(int num){
    int temp=num;
    int number=0;

    while(temp!=0){
       number=number*10+temp%10;
       temp/=10;
    }

    if(num==number){
        return true;
    }
    else{
        return false;
    }
}

int subarrayPalandrome(int arr[],int k,int n){
    int num=0;

    for(int i=0;i<k;i++){
        num=num*10+arr[i];
    }

    if(ispalandrome(num)){
        return 0;
    }

    for(int i=k;i<n;i++){
        num=(num%(int)pow(10,k-1))*10+arr[i];

        if(ispalandrome(num)){
            return i-k+1;
        }
    }
}

int main(){
  int arr[]={2,3,5,1,1,5};
  int k=4;
  int n=6;

  int ans=subarrayPalandrome(arr,k,n);
  if(ans==-1){
      cout<<"palindromic subarray does not exist"<<endl;
  }
  else{
      for(int i=ans;i<ans+k;i++){
          cout<<arr[i]<<" ";
      }
  }
}