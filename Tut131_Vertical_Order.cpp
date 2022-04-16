#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void vertical_traversal(node*root,int h,map<int,vector<int>> &m){
    if(root==NULL){
        return;
    }
    m[h].push_back(root->data);
    vertical_traversal(root->left,h-1,m);
    vertical_traversal(root->right,h+1,m);

}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->right->left = new node(8);
    root->right->left->left = new node(8);
    root->right->left->left->left=new node(20);

    map<int,vector<int>> m;
    vertical_traversal(root,0,m);
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}