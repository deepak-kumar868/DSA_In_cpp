#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
    }
};

int main()
{
    struct node *root = new node(1);
    root->left->data = 2;
    root->right->data = 3;
    root->left->left->data = 4;
    root->left->right->data = 5;
    return 0;
}