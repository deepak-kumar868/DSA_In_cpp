#include <bits/stdc++.h>
using namespace std;

void swaps(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    // int a = 45;
    // int *aptr = &a;
    // cout << a << endl;
    // cout << *aptr << endl;
    // cout << aptr << endl;
    // cout << ++aptr << endl;

    // int arr[4] = {1, 2, 3, 4};
    // cout << *arr << endl;

    // int *ptr = arr;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << *ptr << endl;
    //     ptr++;
    // }

    // int a = 45;
    // int *aptr = &a;
    // cout << a << endl;
    // cout << *aptr << endl;
    // int **qptr = &aptr;
    // cout << qptr << endl;
    // cout << *qptr << endl;
    // cout << **qptr << endl;

    // ---------------------------Examples------------------------------

    int x = 2;
    int y = 4;
    int *aptr = &x;
    int *bptr = &y;
    swaps(aptr, bptr);
    cout << x << " " << y << endl;

    return 0;
}