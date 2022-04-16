#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "56798765";
    sort(str.begin(), str.end(), greater<int>());
    cout << str;
}