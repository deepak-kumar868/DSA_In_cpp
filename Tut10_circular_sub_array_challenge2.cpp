#include <bits/stdc++.h>
using namespace std;

int kadaens(int arr[], int n)
{
    int maxsum = INT_MIN;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxsum = max(maxsum, currentsum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}

int main()
{
    int n, maxsum;
    cin >> n;
    int arr[n], currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum, totalsum = 0;
    int nowrapsum;
    wrapsum = kadaens(arr, n);
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    nowrapsum = totalsum + kadaens(arr, n);
    maxsum = max(wrapsum, nowrapsum);
    cout << maxsum;
    return 0;
}