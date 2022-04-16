#include <bits/stdc++.h>
using namespace std;

int GCD(int n, int a)
{
    while (a != 0)
    {
        int rem = n % a;
        n = a;
        a = rem;
    }
    return n;
}

int main()
{
    int n, a;
    cin >> n >> a;
    cout << GCD(n, a);
    return 0;
}