#include <bits/stdc++.h>
using namespace std;

bool paranthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (!st.empty() && ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']')))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    cout << paranthesis("[{[()}]");
    return 0;
}