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

node* LCA(node*root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }

    node*lef=LCA(root->left,n1,n2);
    node*rig=LCA(root->right,n1,n2);

    if(lef!=NULL &&rig!=NULL){
        return root;
    }
    if(lef==NULL && rig==NULL){
        return NULL;
    }
    if(lef!=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);

}

int findDist(node*root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }

    int left=findDist(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findDist(root->right,k,dist+1);
}

int distbtnodes(node*root,int n1,int n2){
    node*lca=LCA(root,n1,n2);

    int d1=findDist(lca,n1,0);
    int d2=findDist(lca,n2,0);

    return d1+d2;
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->right->left = new node(8);
    root->right->left->left = new node(9);
    root->right->left->left->left=new node(20);

    int n1=1,n2=8;

    cout<<distbtnodes(root,n1,n2);
}