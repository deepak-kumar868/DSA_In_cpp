#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

void Right_view(node*root){
    if(root==NULL){
        return;
    }

    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);

    while(!q1.empty()){
        if(q1.front()==NULL){
            q1.pop();
            if(!q1.empty()){
                q1.push(NULL);
            }
        }

        while(q1.front()!=NULL){
            int curr=q1.front()->data;
            if(q1.front()->left!=NULL){
                q1.push(q1.front()->left);
            }
            if(q1.front()->right!=NULL){
                q1.push(q1.front()->right);
            }
            q1.pop();
            if(q1.front()==NULL){
                cout<<curr<<" ";
            }
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

    Right_view(root);
}