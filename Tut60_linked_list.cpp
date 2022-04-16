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
void insertAtTail(int val)
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

void insertionathead(int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void deletionathead()
{
    node *todelete = head;
    head = todelete->next;

    delete todelete;
}

void deletion(int key)
{
    if (head == NULL)
    {
        cout << "List is Empty";
        return;
    }
    node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// void reverse()
// {
//     node *prevptr = NULL;
//     node *currptr = head;
//     node *nextptr;

//     while (currptr != NULL)
//     {
//         nextptr = currptr->next;
//         currptr->next = prevptr;
//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     head = prevptr;
//     return;
// }

node *reverseK(node *head, int k)
{
    node *prevo = NULL;
    node *currt = head;
    node *nextpt = NULL;
    int count = 0;
    if (!head)
    {
        return NULL;
    }

    while (currt != NULL && count < k)
    {
        nextpt = currt->next;
        currt->next = prevo;
        prevo = currt;
        currt = nextpt;
        count++;
    }
    if (nextpt != NULL)
    {
        head->next = reverseK(nextpt, k);
    }
    return prevo;
}

// Hare and tortroise algorithm. To detect cycle in linked list

bool detect_cycle()
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            return true;
        }
    }
    cout << "";
    return false;
}

void makecycle(int pos)
{
    node *temp = head;
    node *start;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            start = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = start;
}

void removecycle()
{
    node *slow = head;
    node *fast = head;

    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (slow != fast);

    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

int main()
{
    insertAtTail(1);
    insertAtTail(2);
    insertAtTail(31);
    insertAtTail(43);
    insertAtTail(42);
    insertAtTail(41);
    insertAtTail(4);
    insertAtTail(3);
    insertionathead(7);

    deletion(2);
    deletionathead();

    print();
    // reverse();
    // print();
    int k = 2;
    reverseK(head, k);
    print();

    // cout << detect_cycle() << endl;
    // makecycle(3);
    // removecycle();
    // print();

    return 0;
}
