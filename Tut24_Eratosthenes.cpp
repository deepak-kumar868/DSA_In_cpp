#include <bits/stdc++.h>
using namespace std;

void Primenumbers(int n)
{
    int s[n] = {0};
    for (int i = 2; i < n; i++)
    {
        if (s[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                s[j] = 1;
            }
        }
    }
    for (int j = 2; j < n; j++)
    {
        if (s[j] == 0)
        {
            cout << j << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Primenumbers(n);
}