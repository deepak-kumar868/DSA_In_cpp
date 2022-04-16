#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

node *merge(node *head1, node *head2)
{
    node *dummy = new node(0);
    node *head = dummy;
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data >= temp2->data)
        {
            dummy->next = new node(temp2->data);
            temp2 = temp2->next;
        }
        else if (temp1->data < temp2->data)
        {
            dummy->next = new node(temp1->data);
            temp1 = temp1->next;
        }
        dummy = dummy->next;
    }
    return head;
}

int main()
{
    node *n = new node(1);
    n->next = new node(2);
    n->next->next = new node(4);
    n->next->next->next = new node(5);
    n->next->next->next->next = new node(9);

    node *n1 = new node(3);
    n1->next = new node(7);
    n1->next->next = new node(8);

    node *head = merge(n, n1);
    display(head->next);

    return 0;
}