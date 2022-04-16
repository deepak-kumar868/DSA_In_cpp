#include <bits/stdc++.h>
using namespace std;

void reverseString(string str)
{
    if (str.length() == 0)
    {
        return;
    }

    string ros = str.substr(1);
    reverseString(ros);
    cout << str[0];
}

int main()
{
    string str;
    cin >> str;
    reverseString(str);
}