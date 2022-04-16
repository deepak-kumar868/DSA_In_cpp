#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, key;
    bool flag = false;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                cout << i << "," << j << endl;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "Element is found" << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }
}