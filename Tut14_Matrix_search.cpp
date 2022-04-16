#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, key, flag = 1;
    cin >> n1 >> n2 >> key;
    int mat1[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> mat1[i][j];
        }
    }

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (mat1[i][j] == key)
        {
            cout << "Found" << endl;
            flag = 0;
            return 0;
        }
        else if (mat1[i][j] > key)
        {
            j--;
        }
        else if (mat1[i][j] < key)
        {
            i++;
        }
    }
    if (flag == 1)
    {
        cout << "Not found" << endl;
    }

    return 0;
}
