#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // string str;
    // string str1(5, 'n');
    // string str2 = "Deepak";
    // string str3;
    // cin >> str;
    // cout << str;

    // getline(cin, str3);
    // cout << str3 << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // string s1 = "Deepak", s2 = "Kumar";
    // cout << s1.append(s2) << endl;
    // cout << s1 + s2 << endl;
    // cout << s1[1] << endl;

    // string str4 = "sdfghjrtyu dfghj fghjyuio";
    // str4.clear();
    // cout << str4 << endl;

    // string str1 = "abc";
    // string str2 = "abc";
    // cout << str2.compare(str1) << endl;

    // string str = "Deepak";
    // str.clear();

    // if (str.empty())
    // {
    //     cout << "String aare Equal" << endl;
    // }

    string str = "deepakkumar";
    // str.erase(3, 3);
    // cout << str;

    // string str = "deepakkumar";
    // string str1 = "456";
    // cout << str.find("pak") << endl;
    // cout << str.insert(3, "devil") << endl;
    // cout << str.size() << endl;
    // cout << str.length() << endl;
    // cout << str.substr(3, 4) << endl;
    sort(str.begin(), str.end());
    cout << str << endl;

    // int x = stoi(str1);
    // cout << x << endl;

    // int x = 45678;
    // cout << to_string(x) + "2" << endl;
    return 0;
}