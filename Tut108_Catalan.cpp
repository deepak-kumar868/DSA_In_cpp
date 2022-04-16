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

int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}

vector<node*> constructBST(int start,int end){
    vector<node*> tree;
    if(start>end){
        tree.push_back(NULL);
        return tree;
    }

    for(int i=start;i<=end;i++){
        vector<node*> leftsubtree=constructBST(start,i-1);
        vector<node*> rightsubtree=constructBST(i+1,end);

        for(int j=0;j<leftsubtree.size();j++){
            node*left=leftsubtree[j];
            for(int k=0;k<rightsubtree.size();k++){
                node*right=rightsubtree[k];
                node*newnode=new node(i);
                newnode->left=left;
                newnode->right=right;
                tree.push_back(newnode);
            }
        }

    }
    return tree;
}

void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
   cout<<catalan(3)<<endl;
   vector<node*> v1=constructBST(1,3);
   for(int i=0;i<v1.size();i++){
       cout<<i+1<<":";
       preorder(v1[i]);
       cout<<endl;
   }

}