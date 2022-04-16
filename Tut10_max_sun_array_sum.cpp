#include <bits/stdc++.h>
using namespace std;

int main()
{
    //brute force approach
    // int n, maxsum = INT_MIN;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //         }
    //         maxsum = max(maxsum, sum);
    //     }
    // }
    // cout << maxsum;

    //------------------------------- Comulative sum approach------------------------------------------------

    // int n, maxsum = INT_MIN;
    // cin >> n;
    // int arr[n], currentsum[n + 1];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // currentsum[0] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     currentsum[i] = arr[i - 1] + currentsum[i - 1];
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j <= n; j++)
    //     {
    //         sum = currentsum[j] - currentsum[i - 1];
    //         maxsum = max(maxsum, sum);
    //     }
    // }
    // cout << maxsum;

    // -------------------------------------------Kadanes algorithm-----------------------------------------------------------

    int n, maxsum = INT_MIN;
    cin >> n;
    int arr[n], currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxsum = max(currentsum, maxsum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    cout << maxsum;

    return 0;
}