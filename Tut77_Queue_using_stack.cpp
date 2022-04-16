#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
        else if (s1.empty())
        {
            s2.pop();
            return s2.top();
        }
    }
};

int main()
{
    Queue q;
    q.push(34);
    q.push(78);
    q.push(67);
    q.push(21);
    q.push(98);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    return 0;
}