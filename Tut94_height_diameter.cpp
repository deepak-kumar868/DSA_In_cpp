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

int height(node*root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

int calcdiameter(node*root){
    if(root==NULL){
        return 0;
    }
    int currdiameter=height(root->left)+height(root->right)+1;
    return max(currdiameter,(max(calcdiameter(root->right),calcdiameter(root->left))));
}

int caldia(node*root,int*height){
    int lh=0,rh=0;
    if(root==NULL){
        return 0;
    }

    int ldia=caldia(root->left,&lh);
    int rdia=caldia(root->right,&rh);
    int currdiam=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currdiam,max(ldia,rdia));
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(7);
    root->right->left = new node(8); 

    cout<<height(root); 
    cout<<endl;
    cout<<calcdiameter(root)<<endl;
    
    //Otimized method
    int height=0;
    cout<<caldia(root,&height);
}