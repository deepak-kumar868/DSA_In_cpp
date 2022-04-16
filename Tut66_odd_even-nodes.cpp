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

void display(node *&head)
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

void insertionAthead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void odd_even(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenstart = head->next;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;
    display(head);
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
    insertionAthead(head, 7);

    odd_even(head);
}