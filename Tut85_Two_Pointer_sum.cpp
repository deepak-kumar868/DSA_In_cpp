#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the element of array:";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the terget:";
    int target;
    cin>>target;
    bool found=false;
    sort(arr.begin(),arr.end());
    for(int i;i<n;i++){
        int lo=i+1;
        int hi=n-1;
        while (lo<hi)
        {
            if(arr[i]+arr[lo]+arr[hi]==target){
                found=true;
                cout<<"Target is found";
                return 0;
            }
            else if (arr[i]+arr[lo]+arr[hi]>target)
            {
                hi--;
            }
            else{
                lo++;
            }
            
        }
        
    }
    cout<<"Target is not found";
}