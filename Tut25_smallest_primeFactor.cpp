#include <bits/stdc++.h>
using namespace std;

void Primefactor(int n)
{
    int s[n] = {0};
    for (int j = 2; j <= n; j++)
    {
        s[j] = j;
    }

    for (int i = 2; i <= n; i++)
    {
        if (s[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (s[j] == j)
                {
                    s[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << s[n] << " ";
        n = n / s[n];
    }
}

int main()
{
    int n;
    cin >> n;
    Primefactor(n);
}