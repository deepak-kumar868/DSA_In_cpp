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

void printsubtreenodes(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printsubtreenodes(root->left,k-1);
    printsubtreenodes(root->right,k-1);
}

int printnodeatk(node*root,node*target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printsubtreenodes(root,k);
        return 0;
    }

    int dl=printnodeatk(root->left,target,k-1);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printsubtreenodes(root->right,k-dl-2);
        }
        return 1+dl;
    }

    int dr=printnodeatk(root->left,target,k-1);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printsubtreenodes(root->right,k-dl-2);
        }
        return 1+dl;
    }
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

    printnodeatk(root,root->left,2);
}