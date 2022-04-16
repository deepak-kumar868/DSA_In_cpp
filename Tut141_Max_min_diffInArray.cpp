#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum1=0,sum2=0,msum1=0,msum2=0;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> a(n);

    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    cout<<"Sum of Maximum difference of this array is:";
    for(int i=0;i<n/2;i++){
        sum1+=a[i];
    }
    for(int i=n/2;i<n;i++){
        sum2+=a[i];
    }
    cout<<sum2-sum1<<endl;

    cout<<"Sum of minimum difference of this array is:";
    for(int i=0;i<n;i+=2){
        msum1+=a[i];
    }
    for(int i=1;i<n;i+=2){
        msum2+=a[i];
    }
    cout<<msum2-msum1;
}