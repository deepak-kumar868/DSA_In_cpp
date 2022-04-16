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
    for(int i=end;i>=start;i--){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node*buildtree(int inorder[],int postorder[],int start,int end){
    if(start>end){
        return NULL;
    }
    static int idx=end;
    int curr=postorder[idx];
    node*newnode=new node(curr);
    idx--;

    if (start==end)
    {
        return newnode;
    }
    int pos=search(inorder,start,end,curr);
    newnode->right=buildtree(inorder,postorder,pos+1,end);
    newnode->left=buildtree(inorder,postorder,start,pos-1);
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
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};
    node*root=buildtree(inorder,postorder,0,4);
    inorderr(root);
    return 0;
}