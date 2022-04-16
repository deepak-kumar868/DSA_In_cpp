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

node *head = NULL;

void insertionatTail(int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void dispaly()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int length()
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

void appendK(int k)
{
    int n = length() - k;
    node *temp = head;
    node *temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }

    int i = 1;
    while (i < n)
    {
        temp = temp->next;
        i++;
    }
    temp1->next = head;
    head = temp->next;
    temp->next = NULL;
}
int main()
{
    node *head = NULL;
    insertionatTail(4);
    insertionatTail(3);
    insertionatTail(7);
    insertionatTail(9);
    insertionatTail(15);
    insertionatTail(11);
    insertionatTail(19);

    dispaly();
    appendK(3);
    dispaly();
}