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

void insertionAthead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        n->next = head;
    }
    else if (head->next == head)
    {
        head->next = n;
        n->next = head;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}

void display(node *&head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->";
    temp = temp->next;
    cout << temp->data << endl;
}
int main()
{
    node *head = NULL;
    insertionAthead(head, 1);
    insertionAthead(head, 2);
    insertionAthead(head, 3);
    insertionAthead(head, 4);
    insertionAthead(head, 5);
    insertionAthead(head, 6);

    display(head);
}