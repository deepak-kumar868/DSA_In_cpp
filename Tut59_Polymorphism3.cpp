// virtual function

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "This is print function of base class" << endl;
    }
    virtual void display()
    {
        cout << "This is display function of base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is print function of Derived class" << endl;
    }
    void display()
    {
        cout << "This is dispaly function of derived class" << endl;
    }
};

int main()
{
    derived d;
    d.print();
    d.display();

    base *ptr = new derived();
    ptr->display();
    ptr->print();

    base b;
    b.display();

    return 0;
}