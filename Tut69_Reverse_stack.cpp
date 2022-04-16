#include <bits/stdc++.h>
using namespace std;

void InsertionAtbuttom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }

    int topel = st.top();
    st.pop();
    InsertionAtbuttom(st, val);
    st.push(topel);
}

void ReverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int el = st.top();
    st.pop();
    ReverseStack(st);
    InsertionAtbuttom(st, el);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    ReverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}