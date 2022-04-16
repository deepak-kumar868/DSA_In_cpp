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

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void calcpointer(node*root,node**first,node**prev,node**last,node**mid){
    if(root==NULL){
        return;
    }
    calcpointer(root->left,first,prev,last,mid);
    if(*prev && root->data<(*prev)->data){
        if(!*first){
            *first=*prev;
            *mid=root;
        }else{
            *last=root;
        }
    }
    *prev=root;
    calcpointer(root->right,first,prev,last,mid);
}

void recoverBST(node*root){
    node*first=NULL,*prev=NULL,*last=NULL,*mid=NULL;
    calcpointer(root,&first,&prev,&last,&mid);
    
    if(first && last){
        swap(&first->data,&last->data);
    }
    else if(first && mid){
        swap(&first->data,&mid->data);
    }
}

void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node *root1 = new node(5);
    root1->left = new node(2);
    root1->right = new node(7);
    root1->left->left = new node(4);
    root1->left->right = new node(1);
    root1->right->right = new node(8);
    root1->right->left = new node(6);
    inorder(root1);
    cout<<endl;
    recoverBST(root1);
    inorder(root1);
}