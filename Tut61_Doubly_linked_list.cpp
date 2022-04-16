#include <bits/stdc++.h>
using namespace std;

class doubly
{
public:
    int data;
    doubly *prev = NULL;
    doubly *next = NULL;

    doubly(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

doubly *head = NULL;

void insertionatHead(int val)
{
    doubly *newnode = new doubly(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insertatTail(int val)
{
    doubly *newnode = new doubly(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    doubly *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void display()
{
    doubly *temp = head;
    cout << "NULL->";
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
    doubly *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

// void deletion(doubly *&head, int pos)
// {
//     int len = length(head);
//     if (len == 0)
//     {
//         cout << "Linked list is empty" << endl;
//         return;
//     }

//     if (len == 1)
//     {
//         doubly *temp = head;
//         delete temp;
//         return;
//     }
//     if (pos == 1)
//     {
//         doubly *temp = head;
//         head->next->prev = NULL;
//         head = head->next;
//         delete temp;
//         return;
//     }
//     if (pos == len)
//     {
//         doubly *temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->prev->next = NULL;
//         delete temp;
//         return;
//     }

//     doubly *temp = head;
//     int count = 1;
//     while (temp != NULL && count < pos)
//     {
//         temp = temp->next;
//         count++;
//     }
//     temp->prev->next = temp->next;
//     temp->next->prev = temp->prev;
//     delete temp;
// }

int main()
{
    insertatTail(1);
    insertatTail(2);
    insertatTail(3);
    insertatTail(4);

    display();
    insertionatHead(5);
    display();

    // insertionatHead(head, 5);
    // insertionatHead(head, 6);

    // display(head);

    // deletion(head, 6);
    // display(head);
    return 0;
}