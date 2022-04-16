#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char scr, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    hanoi(n - 1, scr, helper, dest);
    cout << "Move from " << scr << " to " << dest << endl;
    hanoi(n - 1, helper, dest, scr);
}

int main()
{
    hanoi(5, 'A', 'C', 'B');
}