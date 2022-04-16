#include <bits/stdc++.h>
using namespace std;

void replacepi(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << 3.14;
        return replacepi(str.substr(2));
    }
    else
    {
        cout << str[0];
        return replacepi(str.substr(1));
    }
}

int main()
{
    replacepi("pippiiipiiipiiii");
    return 0;
}