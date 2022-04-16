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

bool isBSt(node*root,node*min,node*max){
    if(root==NULL){
        return true;
    }

    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }

    bool leftvalid=isBSt(root->left,min,root);
    bool rightvalid=isBSt(root->right,root,max);

    return leftvalid and rightvalid;
}

int main(){
    node *root = new node(5);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(1);
    root->left->right = new node(4);
    root->right->right = new node(8);
    root->right->left = new node(6);

    if(isBSt(root,NULL,NULL)){
        cout<<"valid BST"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }
    return 0;
}