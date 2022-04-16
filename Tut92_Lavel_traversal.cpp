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


int sumK(node*root,int k){
    if(root==NULL){
        cout<<"There is no any node";
        return 0;
    }
    int sum=0;
    int level=0;
    queue<node*> q1;
    q1.push(NULL);
    q1.push(root);

    while(!q1.empty()){
        if(q1.front()==NULL){
            q1.pop();
            if(!q1.empty()){
                q1.push(NULL);
                level++;
            }
        }
        else if(level!=k){
            if(q1.front()->left!=NULL){
            q1.push(q1.front()->left);
            }

            if(q1.front()->right!=NULL){
            q1.push(q1.front()->right);
            }
            q1.pop();
        }
        else{
            while(q1.front()!=NULL){
                sum+=q1.front()->data;
                q1.pop();
            }
            break;
        }
    }
    return sum;
}

void traversal(node*root){
    if(root==NULL){
        return;
    }
    queue<node*> q1;
    q1.push(NULL);
    q1.push(root);

    while(!q1.empty()){
        if(q1.front()==NULL){
            q1.pop();
            if(!q1.empty()){
                q1.push(NULL);
            }
        }
        else{
            cout<<q1.front()->data<<" ";
            if(q1.front()->left!=NULL){
            q1.push(q1.front()->left);
            }

            if(q1.front()->right!=NULL){
            q1.push(q1.front()->right);
            }
            q1.pop();
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

    traversal(root);
    cout<<endl;
    cout<<sumK(root,3);
    return 0;
}