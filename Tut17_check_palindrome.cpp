#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 1;
    cin >> n;
    char c[n + 1];
    cin >> c;
    for (int i = 0; i < n / 2; i++)
    {
        if (c[i] != c[n - 1 - i])
        {
            cout << "Not palindrome word";
            flag = 0;
            return 0;
        }
    }
    if (flag == 1)
    {
        cout << "palindrome words";
    }

    return 0;
}