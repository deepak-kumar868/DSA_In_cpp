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

node*MakeBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end+1)/2;
    node*root=new node(arr[mid]);

    root->left=MakeBST(arr,start,mid-1);
    root->right=MakeBST(arr,mid+1,end);
    return root;
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
   int arr[]={1,2,3,4,5,6,7,8};
   inorder(MakeBST(arr,0,7));
}