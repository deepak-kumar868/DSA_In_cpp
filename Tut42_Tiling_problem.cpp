#include<bits/stdc++.h>

using namespace std;

int Tiling(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Tiling(n-1)+Tiling(n-2);
}
int main(){
    cout<<Tiling(4);
    return 0;
}