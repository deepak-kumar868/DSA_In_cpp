#include<bits/stdc++.h>
using namespace std;

int ans=INT_MIN;

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

int maxpathutilsum(node*root){
    if(root==NULL){
        return 0;
    }
    int left=maxpathutilsum(root->left);
    int right=maxpathutilsum(root->right);

    int nodeMax=max(max(root->data+left,root->data+right),max(root->data+left+right,root->data));
    ans=max(ans,nodeMax);

    int singlepathsum=max(root->data,max(root->data+left,root->data+right));
    return singlepathsum;
}

//       1
//      / \
//     2   3 
//    / \  /\
//   4   58  7 
//       /
//      9
//     /
//    20

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

    maxpathutilsum(root);
    cout<<ans;
}