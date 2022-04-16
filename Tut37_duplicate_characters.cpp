#include <bits/stdc++.h>
using namespace std;

string duplicate(string str)
{
    if (str.length() == 0)
    {
        return "";
    }

    string ans = duplicate(str.substr(1));
    if (str[0] == ans[0])
    {
        return ans;
    }
    else
    {
        return (str[0] + ans);
    }
}

int main()
{
    cout << duplicate("aaaaabbbbcccddddd");
}