#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(19);
    d.push_back(87);
    d.push_back(76);
    d.push_back(23);

    d.push_front(20);
    d.push_front(90);
    d.push_front(40);

    d.pop_front();
    d.pop_front();
    d.pop_back();
    d.pop_back();

    for (auto i : d)
    {
        cout << i << " ";
    }
}