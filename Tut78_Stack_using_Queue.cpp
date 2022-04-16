#include <bits/stdc++.h>
using namespace std;

class stacks
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    stacks()
    {
        N = 0;
    }

    void push(int val)
    {
        q1.push(val);
        N++;
    }
    void pop()
    {
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void top()
    {
        cout << q1.back();
    }
};

int main()
{
    stacks q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();

    q.top();
}