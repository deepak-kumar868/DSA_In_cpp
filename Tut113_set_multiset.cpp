#include<bits/stdc++.h>
using namespace std;

int main(){
   set<int> s;
   s.insert(1);
   s.insert(8);
   s.insert(7);
   s.insert(3);
   //Duplicate not allowed in set
   s.insert(3);
   cout<<*s.lower_bound(4)<<endl;
   cout<<*s.upper_bound(3)<<endl;

   set<int>::iterator i;
   for(i=s.begin();i!=s.end();i++){
         cout<<*i<<" ";
   }

   cout<<endl;
   s.erase(7);
   for(auto i:s){
       cout<<i<<" ";
   }
   cout<<endl;


   //Duplicate allowed in multiset.

   multiset<int> m;
   m.insert(45);
   m.insert(57);
   m.insert(24);
   m.insert(24);
   m.insert(24);
   m.insert(24);
   m.insert(89);
   m.insert(49);

   for(auto i:m){
       cout<<i<<" ";
   }
   cout<<endl;
//    m.erase(24);
   m.erase(m.find(24));
   for(auto i:m){
       cout<<i<<" ";
   }
   cout<<endl;
   

   //unordered set

   unordered_set<int> u;
   u.insert(34);
   u.insert(44);
   u.insert(55);
   u.insert(66);
   u.insert(77);

   for(auto i:u){
       cout<<i<<" ";
   }
   cout<<endl;
   s.erase(66);
   for(auto i:u){
       cout<<i<<" ";
   }
}