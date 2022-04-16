#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char c[n + 1];
    cin.getline(c, n);
    cin.ignore();

    int currentlength = 0, maxlength = 0, i = 0;
    while (1)
    {
        if (c[i] == ' ' || c[i] == '\0')
        {
            maxlength = max(maxlength, currentlength);
            currentlength = 0;
        }
        else
        {
            currentlength++;
        }

        if (c[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlength << endl;

    return 0;
}