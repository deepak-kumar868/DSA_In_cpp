#include<bits/stdc++.h>
using namespace std;

int main(){
    int j=0;
    int zerocount=0;
    int k;
    int n;
    int ans=0;
    cout<<"Enter the number of zero:";
    cin>>k;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        while (zerocount>k)
        {
            if(arr[j]==0){
                zerocount--;
            }
            j++;
        }
        ans=max(ans,i-j+1);
    }
    cout<<ans;
}