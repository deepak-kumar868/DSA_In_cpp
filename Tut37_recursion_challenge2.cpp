#include <bits/stdc++.h>
using namespace std;

string movellx(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    string ans = movellx(str.substr(1));
    if (str[0] == 'x')
    {
        return ans + str[0];
    }
    else
    {
        return str[0] + ans;
    }
}

int main()
{
    cout << movellx("dsfhxxxjyrxuyx");
    return 0;
}