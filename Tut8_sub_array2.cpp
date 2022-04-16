// longest arithemetic subarray

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

    int pd = arr[1] - arr[0];
    int ans = 2;
    int j = 2;
    int cd = 2;
    while (j < n)
    {
        if (pd == arr[j + 1] - arr[j])
        {
            cd++;
        }
        else
        {
            pd = arr[j + 1] - arr[j];
            cd = 2;
        }
        ans = max(ans, cd);
        j++;
    }
    cout << ans << endl;

    return 0;
}