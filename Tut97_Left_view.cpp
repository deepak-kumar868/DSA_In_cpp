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

void leftview(node*root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
       if(q.front()==NULL){
           q.pop();
           if(!q.empty()){
               q.push(NULL);
           }
       }
       cout<<q.front()->data<<" ";
       while(q.front()!=NULL){
           if(q.front()->left!=NULL){
           q.push(q.front()->left);
           }
           if(q.front()->right!=NULL){
           q.push(q.front()->right);
           }
           q.pop();
       }
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
    root->right->left->left = new node(8);
    root->right->left->left->left=new node(20);

    leftview(root);
}