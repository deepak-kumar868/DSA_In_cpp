#include <bits/stdc++.h>
using namespace std;

class student
{

public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "Default consturctor" << endl;
    } // default constructor

    // // parameterised constructor
    // student(string s, int a, int g)
    // {
    //     cout << "Parameterised constructor" << endl;
    //     name = s;
    //     age = a;
    //     gender = g;
    // }
    // // copy constructor
    // student(student &a)
    // {
    //     cout << "copy constructor" << endl;
    //     name = a.name;
    //     age = a.age;
    //     gender = a.gender;
    // }
    // ~student()
    // {
    //     cout << "desturctor called" << endl;
    // }

    // // void setname(string s)
    // // {
    // //     name = s;
    // // }
    // string getname()
    // {
    //     cout << "your name is:" << name << endl;
    //     cout << "your age is:" << age << endl;
    //     cout << "your gender is:" << gender << endl;
    // }

    // //     void print()
    // //     {
    // //         cout << "Name is:" << name << endl;
    // //         cout << "Age is:" << age << endl;
    // //         cout << "gender is:" << gender << endl;
    // //     }

    // //operator overloading
    // bool operator==(student &a)
    // {
    //     if (name == a.name && age == a.age && gender == a.gender)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
};

int main()
{
    student a=student();
    a.name = "deepak";
    a.age = 19;
    a.gender = 0;

    //     student arr[3];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         string s;
    //         cout << "Enter your name:";
    //         cin >> s;
    //         arr[i].setname(s);
    //         cout << "Enter your age:";
    //         cin >> arr[i].age;
    //         cout << "Enter your gender:";
    //         cin >> arr[i].gender;
    //     }
    //     for (int i = 0; i < 3; i++)
    //     {
    //         arr[i].print();
    //     }

    // student a("deepak", 20, 0);
    // a.getname();
    // student b = a;
    // b.getname();

    // if (b == a)
    // {
    //     cout << "Same" << endl;
    // }
    // else
    // {
    //     cout << "Not same" << endl;
    // }
}