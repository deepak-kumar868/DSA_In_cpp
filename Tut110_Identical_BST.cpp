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

bool isidentical(node*root1,node*root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1=(root1->data==root2->data);
        bool cond2=(isidentical(root1->left,root2->left));
        bool cond3=(isidentical(root1->right,root2->right));

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}

int main(){
    node *root1 = new node(5);
    root1->left = new node(2);
    root1->right = new node(7);
    root1->left->left = new node(1);
    root1->left->right = new node(4);
    root1->right->right = new node(8);
    root1->right->left = new node(6);

    node *root2 = new node(5);
    root2->left = new node(2);
    root2->right = new node(7);
    root2->left->left = new node(1);
    root2->left->right = new node(4);
    root2->right->right = new node(18);
    root2->right->left = new node(6);

    if(isidentical(root1,root2)){
        cout<<"Both BST are identical"<<endl;
    }
    else{
        cout<<"Both BST are not identical"<<endl;
    }
}