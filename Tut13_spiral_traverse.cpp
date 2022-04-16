#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row_start = 0, row_end = m - 1, column_start = 0, column_end = n - 1;
    while (row_start <= row_end && column_start < column_end)
    {
        for (int i = column_start; i <= column_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }
        row_start++;

        for (int i = row_start; i <= row_end; i++)
        {
            cout << arr[i][column_end] << " ";
        }
        column_end--;

        for (int i = column_end; i >= column_start; i--)
        {
            cout << arr[row_end][i] << " ";
        }
        row_end--;

        for (int i = row_end; i >= row_start + 1; i--)
        {
            cout << arr[i][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}