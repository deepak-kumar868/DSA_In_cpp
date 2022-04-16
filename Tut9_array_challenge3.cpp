#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 10e3 + 2;
    // int N = 45;
    bool idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        idx[arr[i]] = true;
    }
    for (int i = 0; i < N; i++)
    {
        if (idx[i] == false)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}