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

class info{
    public:
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

info LargestBST(node*root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL){
        return {1,root->data,root->data,1,true};
    }
    info left=LargestBST(root->left);
    info right=LargestBST(root->right);

    info curr;
    curr.size=(1+left.size+right.size);

    if(left.isBST && right.isBST && left.max<root->data && right.min>root->data){
        curr.min=left.min;
        curr.max=right.max;

        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(left.ans,right.ans);
    curr.isBST=false;
    return curr;
}

int main(){
    node *root1 = new node(5);
    root1->left = new node(2);
    root1->right = new node(7);
    root1->left->left = new node(1);
    root1->left->right = new node(4);
    root1->right->right = new node(8);
    root1->right->left = new node(6);

    info ans=LargestBST(root1);
    cout<<ans.ans<<"";
}