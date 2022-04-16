// function overloading

#include <bits/stdc++.h>
using namespace std;

class Apnacollege
{
public:
    void sum()
    {
        cout << "The sum of the numbers is:" << 0 << endl;
    }
    void sum(int x)
    {
        cout << "The sum of the numbers is:" << x << endl;
    }
    void sum(int x, int y)
    {
        cout << "The sum of the numbers is:" << x + y << endl;
    }
    void sum(int x, int y, int z)
    {
        cout << "The sum of the numbers is:" << x + y + z << endl;
    }
};

int main()
{
    Apnacollege a;
    a.sum();
    a.sum(1);
    a.sum(1, 2);
    a.sum(1, 2, 3);
}
