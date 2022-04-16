#include <bits/stdc++.h>
using namespace std;

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + sum(n - 1);
// }

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}

int main()
{
    // int n;
    // cin >> n;
    // cout << sum(n);

    int n, p;
    cin >> n >> p;
    cout << power(n, p);
    return 0;
}