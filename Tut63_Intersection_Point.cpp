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

int intersectionPoint(node *head1, node *head2)
{
    node *temp = head1;
    node *temp1 = head2;
    int l1 = length(temp);
    int l2 = length(temp1);
    if (l1 > l2)
    {
        int len = l1 - l2;
        int i = 0;
        while (i < len)
        {
            temp = temp->next;
            i++;
        }
    }
    else
    {
        int len = l2 - l1;
        int i = 0;
        while (i < len)
        {
            temp1 = temp1->next;
            i++;
        }
    }

    while (temp1->next != NULL && temp->next != NULL && temp->data != temp1->data)
    {
        temp1 = temp1->next;
        temp = temp->next;
    }
    if (temp->data == temp1->data)
    {
        return temp->data;
    }
    else if (temp->data != temp1->data)
    {
        cout << "There is no intersection point" << endl;
        return 0;
    }
    return 0;
}

int main()
{
    node *n = new node(1);
    n->next = new node(2);
    n->next->next = new node(3);
    n->next->next->next = new node(4);
    n->next->next->next->next = new node(5);

    node *n1 = new node(6);
    n1->next = new node(7);
    n1->next->next = new node(8);
    n1->next->next->next = n->next->next;

    int ans = intersectionPoint(n, n1);
    cout << "Common point is:" << ans << endl;
    return 0;
}