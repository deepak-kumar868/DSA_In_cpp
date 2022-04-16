#include <bits/stdc++.h>
using namespace std;

int fiocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return fiocc(arr, n, i + 1, key);
}

int laocc(int arr[], int n, int i, int key)
{
    int restarray = fiocc(arr, n, i + 1, key);
    if (i == n)
    {
        return -1;
    }
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << fiocc(arr, 5, 0, 4);
    cout << laocc(arr, 5, 0, 4);
    return 0;
}