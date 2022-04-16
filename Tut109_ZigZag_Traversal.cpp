#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void zigzagTraversal(node *root)
{

    if (root == NULL)
    {
        return;
    }
    stack<node *> currlevel;
    stack<node *> nextlevel;

    bool righttoleft = true;

    currlevel.push(root);
    while (!currlevel.empty())
    {
        cout << currlevel.top()->data << " ";
        if (righttoleft)
        {
            if (currlevel.top()->left)
            {
                nextlevel.push(currlevel.top()->left);
            }
            if (currlevel.top()->right)
            {
                nextlevel.push(currlevel.top()->right);
            }
            currlevel.pop();
        }
        else
        {
            if (currlevel.top()->right)
            {
                nextlevel.push(currlevel.top()->right);
            }
            if (currlevel.top()->left)
            {
                nextlevel.push(currlevel.top()->left);
            }
            currlevel.pop();
        }
        if (currlevel.empty())
        {
            swap(currlevel, nextlevel);
            righttoleft = !righttoleft;
        }
    }
}

int main()
{
    node *root = new node(5);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(1);
    root->left->right = new node(4);
    root->right->right = new node(8);
    root->right->left = new node(6);

    zigzagTraversal(root);
}