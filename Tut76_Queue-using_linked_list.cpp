#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int x)
    {
        val = x;
        next = NULL;
    }
};

class Queue
{
    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        if (front == NULL)
        {
            node *n = new node(x);
            if (front == NULL)
            {
                back = n;
                front = n;
            }
            else
            {
                back->next = n;
                back = n;
            }
        }
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        node *temp = front;
        front = front->next;
        delete temp;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No element in Queue" << endl;
            return -1;
        }
        return front->val;
    }
};

int main()
{
    Queue q;
    q.push(89);
    q.push(78);
    q.push(35);
    q.push(356);

    q.pop();

    cout << q.peek() << endl;
}