#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*right;
    node*left;

    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

int height(node*root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}

bool isbalanced(node*root){
     if(root==NULL){
         return true;
     }
     
     if(isbalanced(root->left)==false){
         return false;
     }

     if(isbalanced(root->right)==false){
         return false;
     }

     int lh=height(root->left);
     int rh=height(root->right);

     if(abs(lh-rh)>=2){
         return false;
     }
     else{
         return true;
     }
     
}

bool isbalanced(node*root,int*ht){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isbalanced(root->left,&lh)==false){
        return false;
    }
    if(isbalanced(root->right,&rh)==false){
        return false;
    }

    *ht=max(lh,rh)+1;

    if(abs(lh-rh)>=2){
        return false;
    }
    else{
        return true;
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
    root->right->left->left->left= new node(10);


    cout<<isbalanced(root)<<endl;
    
    //Alternate method or optimized method
    int ht=0;
    cout<<isbalanced(root,&ht);
}