#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "dEEPAK";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] = str[i] - 32;
    //     }
    //     else if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] = str[i] + 32;
    //     }
    // }

    // Alter method

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;
}