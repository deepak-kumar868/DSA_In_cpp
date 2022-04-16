#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*right;
    node*left;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int sum_of_nodes(node*root){
    if(root==NULL){
        return 0;
    }
    return sum_of_nodes(root->left)+sum_of_nodes(root->right)+root->data;
}

int no_of_nodes(node*root){
    if(root==NULL){
        return 0;
    }
    return no_of_nodes(root->left)+no_of_nodes(root->right)+1;
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->right->left = new node(8);

    cout<<no_of_nodes(root)<<endl;
    cout<<sum_of_nodes(root);
}