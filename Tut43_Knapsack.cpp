#include <bits/stdc++.h>

using namespace std;

int knapsack(int value[], int wt[], int n, int cap)
{
    if (n == 0 || cap == 0)
    {
        return 0;
    }
    if (wt[n - 1] > cap)
    {
        return knapsack(value, wt, n - 1, cap);
    }
    return max(knapsack(value, wt, n - 1, cap - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, cap));
}

int main()
{
    int value[3] = {100, 50, 150};
    int wt[3] = {10, 20, 30};
    cout << knapsack(value, wt, 3, 50);
    return 0;
}