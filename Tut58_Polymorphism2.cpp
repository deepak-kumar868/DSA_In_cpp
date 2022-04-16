// operator overloading

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex() {}

    void display()
    {
        cout << "sum of complex numbers is:" << real << "+" << img << "i" << endl;
    }

    Complex operator+(Complex const &c)
    {
        Complex res;
        res.real = real + c.real;
        res.img = img + c.img;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
}