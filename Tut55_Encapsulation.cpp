#include <bits/stdc++.h>
using namespace std;

class sample
{
public:
    int a;
    void func3()
    {
        cout << "func3" << endl;
    }

private:
    int b;
    void func1()
    {
        cout << "func1" << endl;
    }

protected:
    int c;
    void func2()
    {
        cout << "func2" << endl;
    }
};
int main()
{
    sample s;
    s.func3();
    // s.func1(); //private members cannot be acces
    // s.func2(); //protected members cannot be acces directly
    return 0;
}