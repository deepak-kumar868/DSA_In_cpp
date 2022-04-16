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

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node* tree(int inorder[],int preorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    node*newnode=new node(curr);
    if(start==end){
        return newnode;
    }
    int pos=search(inorder,start,end,curr);
    newnode->left=tree(inorder,preorder,start,pos-1);
    newnode->right=tree(inorder,preorder,pos+1,end);
}

void inorderr(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderr(root->left);
    cout << root->data << " ";
    inorderr(root->right);
}

int main(){
    int inorder[]={1,2,4,3,5};
    int preorder[]={4,2,1,5,3};
    node*root=tree(inorder,preorder,0,4);
    inorderr(root);
    return 0;
}