#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute force approach
    // int n, sum;
    // cin >> n, sum;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == sum)
    //         {
    //             cout << arr[i] << " " << arr[j];
    //             break;
    //         }
    //     }
    // }

    // optimal approach
    int n, sum;
    bool flag = false;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int st = 0, en = n - 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[st] + arr[en] == sum)
        {
            cout << st << " " << en;
            flag = true;
            break;
        }
        else if (arr[st] + arr[en] > sum)
        {
            en--;
        }

        else if (arr[st] + arr[en] < sum)
        {
            st++;
        }
    }
    if (flag == false)
    {
        return -1;
    }

    return 0;
}