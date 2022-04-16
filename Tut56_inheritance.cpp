#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int a;
    void setnumbers(int x)
    {
        a = x;
    }
    void getnumbers()
    {
        cout << "The value of a is :" << a << endl;
    }
};
class derived : public Base
{
    int b = 65;

public:
    void sum()
    {
        cout << "The sum of a and b is :" << a + b << endl;
    }
};

int main()
{
    derived d;
    d.setnumbers(45);
    d.getnumbers();
    d.sum();
    return 0;
}