#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "deeepak is  good boy";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < 26; i++)
    {
        freq[str[i] - 'a']++;
    }
    int maxm = 0;
    for (int i = 0; i < 26; i++)
    {
        maxm = max(maxm, freq[i]);
    }
    cout << maxm;
}